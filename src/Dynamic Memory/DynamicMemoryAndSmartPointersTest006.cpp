#include <memory>
#include <iostream>

int main(){
	const int *p = new const int(1024);
	std::cout << *p << "\n";
	return 0;
}