#include <iostream>

class X{
public:
	X(){
		std::cout << "X()\n";
	}
	X(const X &){
		std::cout << "X(const X &)\n";
	}
};

int main(){
	X x1;
	X x2 = x1;
	X x3 = X();
	return 0;
}