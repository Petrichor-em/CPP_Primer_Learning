#include <algorithm>
#include <iostream>

int main() {
	int *arrA = (int *)malloc(sizeof(int) * 10);
	int *arrB = (int *)malloc(sizeof(int) * 10);
	for(int i = 0; i < 10; ++i) {
		arrA[i] = i;
	}
	std::copy(arrA, arrA + 10, arrB);	
	for(int i = 0; i < 10; ++i) {
		std::cout << arrB[i];
	}
	std::cout << std::endl;
	return 0;	
}