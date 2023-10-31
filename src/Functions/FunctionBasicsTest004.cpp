#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(void){
	int val1, val2;
	cin >> val1 >> val2;
	swap(val1, val2);
	cout << val1 << " " << val2;
	return 0;
}
