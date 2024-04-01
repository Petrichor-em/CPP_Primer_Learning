#include <list>
#include <vector>
#include <iostream>
int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
int main()
{
	int sz = sizeof(ia) / sizeof(int);
	std::vector<int> ivec;
	std::list<int> ilst;
	for(int i = 0; i < 11; ++i)
	{
		ivec.push_back(ia[i]);
		ilst.push_back(ia[i]);
	}
	auto ivec_iter = ivec.begin();
	auto ilst_iter = ilst.begin();
	while(ivec_iter != ivec.end())
	{
		if(*ivec_iter % 2 == 0) ivec_iter = ivec.erase(ivec_iter);
		else ++ivec_iter;
	}
	while(ilst_iter != ilst.end())
	{
		if(*ilst_iter % 2 == 1) ilst_iter = ilst.erase(ilst_iter);
		else ++ilst_iter;
	}
	
	// print ivec and ilst
	std::cout << "-----ilst-----\n";
	for(auto i : ilst) std::cout << i << " ";
	std::cout << "\n-----ivec-----\n";
	for(auto i : ivec) std::cout << i << " ";
	std::cout << "\n";
	return 0;
}