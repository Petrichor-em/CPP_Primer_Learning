#include <vector>
#include <iostream>
using namespace std;

typedef int (*PF)(int, int);

int func_plus(int ia, int ib){
	return ia + ib;
}

int func_minus(int ia, int ib){
	return ia - ib;
}

int func_product(int ia, int ib){
	return ia * ib;
}

int func_divide(int ia, int ib){
	return ia / ib;
}

int main(){
	PF f1 = func_plus;
	PF f2 = func_minus;
	PF f3 = func_product;
	PF f4 = func_divide;
	vector<PF> vpf = {f1, f2,  f3, f4};
	
	int ia, ib;
	cin >> ia >> ib;
	auto iter = vpf.begin();
	while(iter != vpf.end()){
		cout << (*iter)(ia, ib) << endl;
		++iter;
	}
	return 0;
}
