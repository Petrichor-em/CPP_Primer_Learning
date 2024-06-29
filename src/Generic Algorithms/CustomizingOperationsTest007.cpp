#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
namespace ph = std::placeholders;

bool isShorter(const std::string &str, int sz) {
	return str.size() <= sz;
}

int main() {
	std::vector<std::string> svec
		{"Hello", "World", "I", "Love", "You", "Ephemeral", "loss", "UpsideDown"};
	int count = std::count_if(svec.begin(), svec.end(), std::bind(isShorter, ph::_1, 6));
	std::cout << count << std::endl;	
	return 0;
}