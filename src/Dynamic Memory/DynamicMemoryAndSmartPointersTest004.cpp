#include <iostream>
#include <vector>
#include <string>

int main(){
	std::vector<std::string> strVec1; //空vector
	{ //新作用域
		std::vector<std::string> strVec2{"a", "an", "the"};
		strVec1 = strVec2;
	}
	for(const auto &str : strVec1){
		std::cout << str << "\n";
	}
	return 0;
}