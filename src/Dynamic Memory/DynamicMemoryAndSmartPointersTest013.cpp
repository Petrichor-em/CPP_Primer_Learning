#include <iostream>
#include <memory>

void process(std::shared_ptr<int> p){

}

int main(){
	std::shared_ptr<int> p(new int(10));
	process(std::shared_ptr<int>(p));
	// p is not a dangling pointer
	std::cout << *p;
	return 0;
}