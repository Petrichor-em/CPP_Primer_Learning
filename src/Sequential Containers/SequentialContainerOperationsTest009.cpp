#include <forward_list>
#include <string>
#include <iostream>

void foo(std::forward_list<std::string> &sflst, const std::string &str1,
	const std::string &str2)
	{
		auto iter = sflst.begin();
		while(iter != sflst.end())
		{
			if(*iter == str1)
			{
				iter = sflst.insert_after(iter, str2);
			}
			++iter;
		}
	}

int main()
{
	std::forward_list<std::string> sflst = 
		{"Some", "birds", "are", "not", "meant", "to", "be", "caged"};
	foo(sflst, "caged", "INSERT");
	for(const auto &i : sflst)
	{
		std::cout << i << " ";
	}
	return 0;
}