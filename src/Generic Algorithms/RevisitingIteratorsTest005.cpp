#include <iostream>
#include <vector>
#include <iterator>

int main() {
	std::ostream_iterator<int> out_iter(std::cout, " ");
	int x;
	while(std::cin >> x) {
		*out_iter++ = x;
	}
	std::cout << std::endl;	
	return 0;
}