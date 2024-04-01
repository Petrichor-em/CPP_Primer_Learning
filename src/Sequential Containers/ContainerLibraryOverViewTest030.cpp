#include <vector>
#include <iostream>
int main()
{
	std::vector<int> ivec = {0, 1, 2};
	for(auto i : ivec)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	ivec.assign(0, 0); // 等价于ivec.clear()
	for(auto i : ivec)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	std::cout << ivec.empty();
	return 0;
}