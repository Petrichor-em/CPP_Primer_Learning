#include <vector>
#include <iostream>
int main()
{
	std::vector<int> ivec(10, 0);
	try
	{
		/* code */
		ivec.at(11);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
		
	return 0;
}