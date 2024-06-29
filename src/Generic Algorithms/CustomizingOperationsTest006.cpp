#include <iostream>

int main() {
	int n = 8;
	auto dec_until_zero = [&n](){
		if(n > 0) { --n; return false; }
		else { return true; }
	};
	while(!dec_until_zero()) {
		std::cout << n << " ";
	}
	return 0;
}