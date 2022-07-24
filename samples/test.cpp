
// //-----------------------------------------------------------------------------------

// //                          TEST CASE -1

// // -------------------------------------------------------------------------------------

// int hello =10;

// class Sample{

// public:
// 	int a=1,b=2;
// 	int add(){
// 		int c=10;
// 		long d=1e4;
// 		float e =d;
// 		char f='m';
// 		return a+b;}

// };

// class Test{

// public:

// 	Sample s;
//  Sample s2;
// 	Sample *s3 = new Sample();
// 	Test(){

// 	}
// 	Test(const Test& t){
// 		int h=1;	
// 	}
// };

// class Test2:public Test{
// 	char k ='c';
// };

// int main(){
// 	Test t;

// 	Test t2 =t;
// 	Test *t3=new Test2() ;
// 	Test t4=*t3;
// }


// //-----------------------------------------------------------------------------------

// //                          TEST CASE -2

// // -------------------------------------------------------------------------------------

// class BigObject{
// public:
// 	int a=1;
// 	int b=2;
// 	int c=3;
// 	int d=4;
// 	double e[100];
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

// 	BigObject big_obj = foo.bar(); 
// }

// //-----------------------------------------------------------------------------------

// //                          TEST CASE - 3

// // -------------------------------------------------------------------------------------


// class SmallObject{
// public:
// 	int e =10;
// 	int f = 20;
// };

// int main(){
// 	SmallObject small_obj ;
// 	SmallObject s2=small_obj;
// }

// //-----------------------------------------------------------------------------------

// //                          TEST CASE - 4

// // -------------------------------------------------------------------------------------


class outer_class{
public:
	class inner_class{
		double largeary[100];
	};

	inner_class* get_inner_class_instance(){
		return new inner_class();
	}
};

int main(){
	outer_class o ;
	auto *i = o.get_inner_class_instance();
	auto i2 = i;
}
