#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

int main() {
	std::multiset<std::string> c{"I", "Love", "You"};
	std::vector<std::string> v{"Hello", "World", "!"};
	std::copy(v.begin(), v.end(), std::inserter(c, c.end()));
	for(auto i : c) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}