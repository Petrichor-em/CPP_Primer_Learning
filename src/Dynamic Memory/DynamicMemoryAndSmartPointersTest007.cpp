#include <iostream>
int main(){
	int *p(new int(42));
	int *q = p;
	delete p;
	// q is dangling pointer
	std::cout << *q;
	return 0;
}