#include <list>
#include <deque>
#include <iostream>
int main()
{
	std::list<int> ilst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::deque<int> ideq_odd;
	std::deque<int> ideq_even;
	for(int i : ilst)
	{
		if(i % 2 == 0)
		{
			ideq_even.push_back(i);
		}else{
			ideq_odd.push_back(i);
		}
	}
	std::cout << "----------even----------\n";
	for(auto i : ideq_even)
	{
		std::cout << i << " ";
	}
	
	std::cout << "\n";

	std::cout << "----------odd-----------\n";	
	for(auto i : ideq_odd)
	{
		std::cout << i << " ";
	}
	
	return 0;
}