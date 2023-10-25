#include <iostream>
using namespace std;

int main(void){
	int x[10]; int *p = x;
	cout << sizeof (x) / sizeof (*x) << endl; //10
	cout << sizeof (p) / sizeof (*p) << endl; //指针大小除以int类型大小
	cout << sizeof (p) << " devided by " << sizeof (*p) << endl;
	return 0;
}
