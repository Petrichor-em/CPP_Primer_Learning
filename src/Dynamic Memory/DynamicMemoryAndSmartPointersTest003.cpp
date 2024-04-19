#include <iostream>
#include <memory>

std::shared_ptr<int> factory(int para){
	std::shared_ptr<int> p = std::make_shared<int>(para);
	return p;
}

void use_factory(int para){
	std::shared_ptr<int> p = factory(para);
	std::cout << *p << "\n";
}

int main(){				
	int i;
	std::cin >> i;
	std::shared_ptr<int> p = factory(i);
	std::cout << "factory function:";
	std::cout << *p << "\n";
 	std::cout << "use_factory function:";
	use_factory(i);
	return 0;	
}