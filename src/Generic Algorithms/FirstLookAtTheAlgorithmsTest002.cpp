#include <iostream>
#include <numeric>
#include <vector>

int main() {
	std::vector<double> ivec;
	for(int i = 0; i < 9; ++i) {
		ivec.push_back(i);
	}
	ivec.push_back(9.9);
	ivec.push_back(10.543);
	ivec.push_back(55.52);
	double sum = std::accumulate(ivec.begin(), ivec.end(), 0.0f);
	std::cout << sum << std::endl;
}