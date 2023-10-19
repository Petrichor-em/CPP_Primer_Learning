#include <iostream>
using namespace std;

int main(void){
	//商与模
	//除了-m导致溢出的情况, 其他时候(-m)/n 和 m/(-n) 都等于 -(m/n)
	//m%(-n)等于m%n, (-m)%n等于-(m%n)
	cout << 21 % 6 << endl; //3
	cout << -21 % -8 << endl; //-5
	cout << 21 % -5 << endl; //1
	cout << 21 / 3 << endl;//7
	cout << 21 / 6 << endl;//3
	cout << -21 / -8 << endl;//2
	cout << 21 / -5 << endl;//-4
	return 0;
}
