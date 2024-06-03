#include <iostream>
#include <memory>

void process(std::shared_ptr<int> p){

}
int main(){
	std::shared_ptr<int> p(new int(42));
	int *q = p.get();
	process(std::shared_ptr<int>(q));
	// Here q become a dangling pointer!
	std::cout << *p << std::endl;
	return 0;
}