
#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
#include "clang/Frontend/FrontendPluginRegistry.h"
#include "clang/AST/ParentMapContext.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Basic/FileManager.h"
#include "clang/Frontend/CompilerInstance.h"
#include "llvm/Support/raw_ostream.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/AST/Attr.h"
#include "clang/Lex/Lexer.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/ADT/StringRef.h"


using namespace clang;
using namespace std;

vector<string> lines;
int flag=1;

int getline(string s){
//agnvasfaskm:12:1 fssdf
	char c=':';
	int first = s.find(c);
    int second = s.find(c, first+1);
    string ln = s.substr(first+1,second);
    return stoi(ln);
}
    

void codemapper(string fname){
	if(flag<=0){
		return;
	}
	ifstream inp;
	inp.open(fname);

    string s;
	while(getline(inp,s)){
		lines.push_back(s);
	}
	inp.close();
	flag--;
}

string suggest(string s){
	int i;
	for(i=0;i<s.length();i++){
		if(s[i]=='\t'|| s[i]==' '){
			i++;
		}
		else{
			break;
		}
	}
	s=s.substr(max(0,i-1));


	int first = s.find(' ');
	s.insert(first+1,"&");
	return "const "+s;
}
string message(string s){
    return "SUGGESTION : "+suggest(s);
}




class BigObjectWarningVisitor : public RecursiveASTVisitor<BigObjectWarningVisitor> {
private:
	ASTContext *context;
	CompilerInstance& instance;

	DiagnosticsEngine& d;

	unsigned int warningID;
	
public:
	
	explicit BigObjectWarningVisitor(ASTContext *context, CompilerInstance& instance):
			context(context), instance(instance), d(instance.getDiagnostics()) {
		warningID = d.getCustomDiagID(DiagnosticsEngine::Warning,
				"Copying Large object:\n%0");
	}
	const clang::SourceManager& sm=context->getSourceManager();
	
	
	virtual bool VisitDeclStmt(DeclStmt* s){
		string str = s->getStmtClassName();
		if(str== "DeclStmt"){
			auto it0 = s->child_begin();
			if(it0 == s->child_end()) return true;
			string str2 = it0->getStmtClassName();
			if(str2 == "CXXConstructExpr"){
				
				CXXConstructExpr* it1 =(CXXConstructExpr *)*it0;
				auto constr = it1->getConstructor();
				if(constr->isCopyConstructor()){
					Decl* D = s->getSingleDecl();
					VarDecl *VD = (VarDecl *)D;
					
					auto FieldInfo = VD->getASTContext().getTypeInfo(VD->getType());
					auto TypeSize = FieldInfo.Width;
					
					if((TypeSize/8)>=20){
						codemapper("samples/test.cpp");
						
						auto sr = D->getSourceRange();
						auto sl = sr.getBegin();
						string wline = sl.printToString(sm);
						int lnum=getline(wline);
						
						auto loc = context->getFullLoc(D->getLocation());
						d.Report(loc, warningID)<<message(lines[lnum-1]);
					}
			
				}	
			}
		}
		return true;
	}
	virtual bool TraverseType(QualType x) {
        return true;
    }

};

class BigObjectWarningConsumer : public ASTConsumer {
	CompilerInstance& instance;
	BigObjectWarningVisitor visitor;

public:
	BigObjectWarningConsumer(CompilerInstance& instance)
			: instance(instance), visitor(&instance.getASTContext(), instance) {}

	virtual void HandleTranslationUnit(ASTContext &context) override {
		visitor.TraverseDecl(context.getTranslationUnitDecl());
	}
};

class BigObjectWarningAction : public PluginASTAction {
protected:
	virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance& instance, llvm::StringRef) override {
		return std::make_unique<BigObjectWarningConsumer>(instance);
	}

	virtual bool ParseArgs(const CompilerInstance&, const std::vector<std::string>&) override {
		return true;
	}

	virtual PluginASTAction::ActionType getActionType() override {
  		return PluginASTAction::AddAfterMainAction;
	}
};

static FrontendPluginRegistry::Add<BigObjectWarningAction> BigObjectWarning("BigObjectWarning", "Warn against underscores in function and variable names");
