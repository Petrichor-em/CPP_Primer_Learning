#include <iostream>
#include <vector>

int main(){
	std::vector<int> ivec;
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(2);
	std::cout << ivec.capacity() << std::endl;
	ivec.reserve(50);
	std::cout << ivec.capacity() << std::endl;
	return 0;
}