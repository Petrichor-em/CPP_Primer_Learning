#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <deque>

int main() {
	std::vector<int> ivec;
	auto back_ins_it = std::back_inserter(ivec);
	for(int i = 0; i < 10; ++i) {
		*back_ins_it = i;
	}
	std::vector<int> ivecA;
	std::deque<int> iqueB;
	std::vector<int> ivecC;
	auto itA = std::back_inserter(ivecA);
	auto itB = std::front_inserter(iqueB);
	auto itC = std::inserter(ivecC, ivecC.begin());
	std::copy(ivec.begin(), ivec.end(), itA);
	std::copy(ivec.begin(), ivec.end(), itB);
	std::copy(ivec.begin(), ivec.end(), itC);
	std::cout << "ivec A ------------------------------\n";
	for(auto i : ivecA) { std::cout << i << " "; }
	std::cout << std::endl;
	std::cout << "iqueB ------------------------------\n";
	for(auto i : iqueB) { std::cout << i << " "; }
	std::cout << std::endl;
	std::cout << "ivec C ------------------------------\n";
	for(auto i : ivecC) { std::cout << i << " "; }
	std::cout << std::endl;
	return 0;
}