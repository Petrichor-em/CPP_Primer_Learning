#include <iostream>
#include <memory>

int main(){
	int *q = new int(10), *r = new int(100);
	r = q;
	auto q2 = std::make_shared<int>(10), r2 = std::make_shared<int>(100);
	r2 = q2;
	std::cout << *r << std::endl;
	std::cout << *r2 << std::endl;
	return 0;
}