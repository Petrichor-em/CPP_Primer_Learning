#include <list>
#include <iostream>
#include <string>
int main()
{
	std::list<std::string> slst(5, "b");
	slst.insert(slst.begin(), 5, "f");
	for(auto i : slst)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	return 0;
}