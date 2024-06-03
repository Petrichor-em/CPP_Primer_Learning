#include <iostream>
#include <memory>

void process(std::shared_ptr<int> p){

}

int main(){
	auto p = new int();
	auto sp = std::make_shared<int>();
	process(sp);
	std::cout << *sp << std::endl;
//	process(new int());
//	process(p);
	process(std::shared_ptr<int>(p));
	// now p is a dangling pointer
	std::cout << *p << std::endl;
	return 0;
}