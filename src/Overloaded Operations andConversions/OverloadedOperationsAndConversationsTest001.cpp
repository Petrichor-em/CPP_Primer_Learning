#include "Sales_data.h"
#include <iostream>

int main(){
//	Sales_data itema(std::cin), itemb(std::cin);
//	Sales_data itemc = itema + itemb;
	Sales_data itema("abc", 200, 200);
	Sales_data itemb("abc", 100, 100);
	std::cout << itema << "\n";
	std::cout << itemb << "\n";
	itema += itemb;
	std::cout << itema << "\n";
	return 0;
}
