#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto it = ivec.begin();
	while (it != ivec.end())
	{
		if (*it % 2 == 0)
		{
			it = ivec.insert(it, *it);
			it += 2;
		}
		else
		{
			it = ivec.erase(it);
		}
	}
	for (auto i : ivec)
	{
		std::cout << i << " " << std::endl;
	}
	return 0;
}