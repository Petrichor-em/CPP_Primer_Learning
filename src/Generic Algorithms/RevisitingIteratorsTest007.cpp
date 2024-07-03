#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
	auto in_iter = std::istream_iterator<int>(std::cin);
	auto end = std::istream_iterator<int>();
	auto out_iter = std::ostream_iterator<int> (std::cout, " ");
	std::vector<int> ivec;
	ivec.assign(in_iter, end);
	std::sort(ivec.begin(), ivec.end(), [](int a, int b){ return a < b; });
	std::unique_copy(ivec.begin(), ivec.end(), out_iter);
	return 0;
}