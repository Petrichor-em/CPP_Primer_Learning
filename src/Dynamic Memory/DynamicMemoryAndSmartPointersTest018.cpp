#include <iostream>
#include <memory>

int main(){
	std::unique_ptr<int> p(new int(10));
	std::unique_ptr<int> pp(p.get());
	pp.reset();
	// now pp is a nullptr and p is a dangling pointer
	std::cout << *p << std::endl;
	return 0;
}