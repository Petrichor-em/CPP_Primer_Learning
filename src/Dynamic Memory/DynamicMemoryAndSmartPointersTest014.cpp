#include <iostream>
#include <memory>

void process(std::shared_ptr<int> p){

}

int main(){
	std::shared_ptr<int> p(new int(10));
	process(std::shared_ptr<int> (p.get()));
	// p is now a dangling pointer
	std::cout << *p << std::endl;
	return 0;
}