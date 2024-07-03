#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

int main() {
	int x;
	std::vector<int> ivec;
	std::list<int> ilst;
	while(std::cin >> x) {
		ivec.push_back(x);
	}
	std::cin.clear();
	std::clearerr(stdin);
	auto back_it = std::back_inserter(ilst);
	std::unique_copy(ivec.begin(), ivec.end(), back_it);
	for(auto i : ilst) {
		std::cout << i << " ";
	}	
	std::cout << std::endl;
	return 0;
}