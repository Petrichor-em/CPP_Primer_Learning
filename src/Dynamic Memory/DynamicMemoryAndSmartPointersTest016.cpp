#include <iostream>
#include <memory>

int main(){
	auto sp = std::make_shared<int>();
	auto p = sp.get();
	delete p;
	// now sp is a dangling pointer
	std::cout << *sp << std::endl;
	return 0;
}