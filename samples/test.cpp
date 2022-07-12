int hello =10;

class Sample{

public:
	int a=1,b=2;
	int add(){
		int c=10;
		long d=1e4;
		float e =d;
		char f='m';
		return a+b;}

};

class Test{

public:

	Sample s;
	Sample s2 =s;
	Sample *s3 = new Sample();
	Test(){

	}
	Test(const Test& t){
		int h=1;	
	}
};

class Test2:public Test{
	char k ='c';
};

int main(){
	Test t;

	Test t2 =t;
	Test *t3=new Test2() ;
	Test t4=*t3;
}


// class BigObject{
// public:
// 	int a=1;
// 	int b=2;
// 	int c=3;
// 	double d[100];
// };


// class Foo {
// 	public:
//   BigObject b;
// 	const BigObject & bar(){
		
// 		BigObject &b1=b;
// 		return b1;
// 	};
// };

// int main(){
// 	Foo foo;
// 	BigObject obj = foo.bar(); 
// }


