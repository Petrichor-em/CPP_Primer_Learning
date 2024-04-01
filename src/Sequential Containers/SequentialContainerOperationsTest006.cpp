#include <list>
#include <iostream>

int main()
{
	std::list<int> ilst;
	for(int i = 0; i < 9; ++i)
	{
		ilst.push_back(i);
	}
	for(auto i : ilst)	
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	auto it = ilst.begin();
	while(it != ilst.end())
	{
		if(*it % 2 != 0) it = ilst.erase(it);
		else ++it;
	}
	std::cout << "----------------------\n";
	for(auto i : ilst) std::cout << i << " ";
	std::cout << "\n";
	return 0;
}