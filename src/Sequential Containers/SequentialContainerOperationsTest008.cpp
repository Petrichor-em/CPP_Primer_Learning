#include <forward_list>
#include <iostream>
int main()
{
	std::forward_list<int> iflst
		= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(auto i : iflst)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	auto prev = iflst.before_begin();
	auto curr = iflst.begin();
	while(curr != iflst.end())
	{
		if(*curr % 2 == 1)
		{
			curr = iflst.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	for(auto i : iflst)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	return 0;
}