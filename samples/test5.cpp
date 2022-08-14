// //-----------------------------------------------------------------------------------

// //                          TEST CASE - 5

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
	auto &i2 = i;
}