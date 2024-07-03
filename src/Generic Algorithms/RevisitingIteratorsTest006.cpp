#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

int main() {
	std::ostream_iterator<int> out_iter(std::cout, " ");
	std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
	std::copy(ivec.begin(), ivec.end(), out_iter);
	std::cout << std::endl;
	return 0;
}