#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main() {
	std::vector<int> ivec;
	for(int i = 0; i < 10; ++i) {
		ivec.push_back(i);
	}
	auto back_it = std::back_inserter(ivec);
	std::fill_n(back_it, 5, -1);
	std::cout << ivec.size() << std::endl;
	for(auto i : ivec) {
		std::cout << i << " ";
	}
	return 0;
}