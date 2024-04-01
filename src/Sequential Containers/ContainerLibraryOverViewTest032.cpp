#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
	std::vector<double> dvec(10, 1);
	std::vector<double> ivec(5, 2);
	std::swap(dvec, ivec);	
	for(auto i : dvec)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	for(auto i: ivec)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	return 0;
}