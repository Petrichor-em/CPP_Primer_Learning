#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main() {
	std::string str;
	int x;
	std::vector<std::pair<std::string, int>> vec;
	while(true) {
		if(!( std::cin >> str )) { break; }
		if(!( std::cin >> x )) { break; }
		vec.push_back(std::make_pair(str, x));
	}
	for(const auto i : vec) {
		std::cout << i.first << " " << i.second << std::endl;
	}
	return 0;
}