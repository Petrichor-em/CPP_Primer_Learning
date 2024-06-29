#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> svec =
			{"Hello", "World", "I", "Love", "You", "Ephemeral", "loss", "UpsideDown"};
	int size = 5;
	std::sort(svec.begin(), svec.end(),
		[](const std::string &a, const std::string &b) {return a < b; });
	auto beg = std::stable_partition(svec.begin(), svec.end(),
		[size](const std::string &str) { return str.size() < size; });
	std::stable_sort(beg, svec.end(),
		[](const std::string &a, const std::string &b) { return a.size() < b.size(); });	
	for(auto i = svec.begin(); i < svec.end(); ++i) {
		std::cout << *i << " ";
	}	
	std::cout << std::endl;
}