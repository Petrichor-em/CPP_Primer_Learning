#include <vector>
#include <iostream>
#include <iterator>

int main() {
	auto it = std::istream_iterator<int> (std::cin);
	auto end = std::istream_iterator<int> ();
	std::vector<int> ivec;
	while(it != end) {
		ivec.push_back(*it++);
	}
	for(auto i : ivec) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}