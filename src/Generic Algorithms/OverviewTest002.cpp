#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int x;
	std::vector<int> ivec;
	while (std::cin >> x) {
		ivec.push_back(x);
	}
	std::cout << "Target: ";
	std::cin.clear();
	clearerr(stdin);
	std::cin >> x;
	int count_result = std::count(ivec.begin(), ivec.end(), x);
	std::cout << count_result << std::endl;
	return 0;
}