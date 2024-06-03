#include <iostream>
#include <memory>
#include <vector>

typedef std::vector<int> iVec;

std::shared_ptr<iVec> create(){
	std::shared_ptr<iVec> p = std::make_shared<iVec>();
	return p;	
}

void write(std::shared_ptr<iVec> p){
	int i;
	while(std::cin >> i){
		p->push_back(i);
	}
}

void print(std::shared_ptr<iVec> p){
	for(int i : *p){
		std::cout << i << "\n";
	}
}

int main(){
	std::shared_ptr p = create();
	write(p);
	print(p);	
	return 0;
}