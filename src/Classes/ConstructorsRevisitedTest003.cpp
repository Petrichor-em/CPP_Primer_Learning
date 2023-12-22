#include <string>
#include <iostream>
class Sales_data {
public:
	//默认实参
	Sales_data(std::string s = ""): BookNo(s) { }
	//可能产生二义性调用
	Sales_data(std::istream &is = std::cin) {
		is >> BookNo;
	}
private:
	std::string BookNo;
};
