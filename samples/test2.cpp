// //-----------------------------------------------------------------------------------

// //                          TEST CASE -2

// // -------------------------------------------------------------------------------------

class BigObject{
public:
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	double e[100];
};




class Foo {
	public:

    BigObject b;
    BigObject b2=b;
	const BigObject & bar(){
		
		BigObject &b1=b;
		return b1;
	};
};


int main(){
	Foo foo;
	BigObject big_obj = foo.bar(); 
}