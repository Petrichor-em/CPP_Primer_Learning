#include <iostream>
#include <array>
#include <vector>
int main()
{
	std::array<int, 10> iarr = {0};
	std::cout << iarr.max_size() << std::endl;
	std::vector<int> ivec(10, 0); 
	std::cout << ivec.max_size() << std::endl;
	return 0;
}