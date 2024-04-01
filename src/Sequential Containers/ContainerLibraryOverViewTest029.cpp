#include <list>
#include <vector>
#include <iostream>
int main()
{
	std::list<int> ilst = {0, 1, 2, 3, 4};
	std::vector<int> ivec = {9, 8, 7};
	std::vector<double> dvec(ilst.begin(), ilst.end());
	for(auto i : dvec)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	std::vector<double> dvec2(ivec.begin(), ivec.end());
	for(auto i : dvec2)	
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	return 0;
}