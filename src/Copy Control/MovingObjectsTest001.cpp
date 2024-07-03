#include <iostream>
#include <utility>

int foo() {
	return 8;
}

int main() {
	int i = 10;
	int &&j = std::move(i);
	std::cout << i << std::endl;
	int arr[10] = {0};
	int &&k = foo();
	return 0;
}