#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> svec =
			{"Hello", "World", "I", "Love", "You", "Ephemeral", "loss", "UpsideDown"};
	int size = 5;
	auto big_beg = std::partition(svec.begin(), svec.end(),
		[size](const std::string &str) { return str.size() < size; });	
	std::sort(big_beg, svec.end(),
		[](const std::string &a, const std::string &b) {return a < b; });
	std::stable_sort(big_beg, svec.end(),
		[](const std::string &a, const std::string &b) { return a.size() < b.size(); });
	for (auto it = big_beg; it != svec.end(); ++it) {
		std::cout << *it << " ";
	}		
	std::cout << std::endl;
}