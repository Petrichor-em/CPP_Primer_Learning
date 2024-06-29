#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
namespace ph = std::placeholders;

bool check_size(const std::string s, int value) {
	return value > s.size();
}

int main() {
	std::vector<int> ivec {3, 5, 2, 7, 8, 1, 3};
	std::string str("You");
	auto it = std::find_if(ivec.begin(), ivec.end(), std::bind(check_size, str, ph::_1));
	std::cout << it - ivec.begin() << std::endl;
	return 0;
}