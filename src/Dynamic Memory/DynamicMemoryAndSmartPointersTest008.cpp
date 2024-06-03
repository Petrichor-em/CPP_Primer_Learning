#include <iostream>
#include <vector>

std::vector<int> *createIntVec(){
	std::vector<int> *pIntVec = new std::vector<int>();
	return pIntVec;
}

void writeIntVec(std::vector<int> *pIntVec){
	int i;
	while(std::cin >> i){
		pIntVec->push_back(i);
	}
}

void printIntVec(std::vector<int> *pIntVec){
	for(int i : *pIntVec){
		std::cout << i << "\n";
	}
}

int main(){
	std::vector<int> *p = createIntVec();
	writeIntVec(p);
	printIntVec(p);
	delete p;
	return 0;
}