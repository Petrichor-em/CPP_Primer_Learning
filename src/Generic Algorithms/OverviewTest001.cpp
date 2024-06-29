#include <iostream>
#include <algorithm>

int main() {
	int *arr = (int *) malloc(10 * sizeof(int));
	for(int i = 0; i < 10; ++i) {
		arr[i] = i;
	}
	auto num = std::find(arr, arr + 9, 6);
	std::cout << num - arr << "\n";
	return 0;
}