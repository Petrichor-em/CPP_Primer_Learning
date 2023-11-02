#include <iostream>
using namespace std;

void exchangePointer(int *(&a), int *(&b)){
	int *temp = a;
	a = b;
	b = temp;
}

int main(){
	int i = 10, j = 40;
	int *pi = &i, *pj = &j;
	exchangePointer(pi, pj);
	cout << *pi << " " << *pj;
	return 0;
}
