#include <vector>
#include <iostream>
int main() {
	std::vector<int> iVec(10, 1);
	for(auto i : iVec){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << "----- after resize -----" << std::endl;
	iVec.resize(100);
	unsigned counter = 1;
	for(auto i : iVec){
		std::cout << counter << '\t' << i << std::endl;
		++counter;
	}
	return 0;
}