#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	std::vector<int> even;
	std::vector<int> odd;
	auto in_iter = std::istream_iterator<int>(std::cin);
	auto end = std::istream_iterator<int>();
	auto even_back_ins = std::back_inserter(even);
	auto odd_back_ins = std::back_inserter(odd);
	auto is_even = [](int x) {
		return x % 2 == 0;
	};
	while(in_iter != end) {
		if(is_even(*in_iter)) {
			*even_back_ins = *in_iter;
		} else {
			*odd_back_ins = *in_iter;
		}
		++in_iter;
	}
	std::cout << "ODD-------------------\n";
	for(auto i : odd) {
		std::cout << i << " ";
	}
	std::cout <<  std::endl;
	std::cout << "EVEN-------------------\n";
	for(auto i : even) {
		std::cout << i << " ";
	}
	std::cout <<  std::endl;
}