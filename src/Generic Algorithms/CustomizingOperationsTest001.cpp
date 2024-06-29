#include <iostream>

int main() {
	auto f1 = [](int a, int b) {
		return a + b;
	};
	std::cout << f1(1, 2) << std::endl;
	int out = 1;
	auto f2 = [out](int a){
		return out + a;
	};
	std::cout << f2(4) << std::endl;
	return 0;
}