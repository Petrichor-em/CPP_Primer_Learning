#include <iostream>
#include <memory>

int main(){
	std::shared_ptr<int> p(new int(42));
	p.reset(new int(43));
	std::cout << *p << std::endl;
	return 0;
}