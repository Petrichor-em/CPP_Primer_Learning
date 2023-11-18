#include "Sales_data.h"

int main(){
	Sales_data item1("abc");
	print(std::cout, item1) << std::endl;
	Sales_data item2("aaa", 5, 4.0);
	print(std::cout, item2) << std::endl;
	Sales_data item3(std::cin);
	print(std::cout, item3) << std::endl;
	return 0;
}
