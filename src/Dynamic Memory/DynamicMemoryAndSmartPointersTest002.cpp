#include <iostream>
#include <memory>

int main(){
	auto p = std::make_shared<int>(42);
	auto q(p);
	std::cout << q.use_count();
	return 0;
}