#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int x;
	std::vector<int> ivec;
	while(std::cin >> x) {
		ivec.push_back(x);	
	}
	std::cin.clear();
	std::clearerr(stdin);
	std::sort(ivec.begin(), ivec.end(),
		[](int a, int b) { return a < b; });
	for(auto i : ivec) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}