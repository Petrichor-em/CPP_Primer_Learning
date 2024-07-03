#include <iostream>
#include <iterator>
#include <vector>

int main() {
	auto it = std::istream_iterator<int>(std::cin);
	auto end = std::istream_iterator<int>();	
	std::vector<int> ivec;
	ivec.assign(it, end);
	for(auto i : ivec) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}