#include <iostream>
using namespace std;

int max(int *a, int b){
	if(*a < b)
		return b;
	else
		return *a;
}

int main(){
	int i = 10;
	cout << max(&i, 9);
	return 0;
}
