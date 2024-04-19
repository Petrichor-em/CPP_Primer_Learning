#include <memory>
#include <string>
#include <iostream>

int main(){
	std::shared_ptr<std::string> str = std::make_shared<std::string>("Hello");
	std::cout << *str;
	return 0;
}