#include <iostream>
#include <memory>

int main(){
	std::shared_ptr<int> ptr1(new int(10));
	std::shared_ptr<int> ptr2(ptr1.get());
	ptr1.reset();
	std::cout << *ptr2 << std::endl;
	return 0;
}