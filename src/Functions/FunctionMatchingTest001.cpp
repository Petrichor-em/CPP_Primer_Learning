#include <iostream>
using namespace std;

void func(double a, double b = .1){
	cout << "func(double, double) excuted";
}

void func(int a, int b){
	cout << "func(int, int) excuted";
}

void func(int a){
	cout << "func(int) excuted";
}

void func(){
	cout << "func() excuted";
}

int main(){
	
	func(42, 0);
//	func(2.56, 42); //ambiguous call
//	Both func(int, int) and func(double, double) are viable,
//	but can't find the most optimal matching.
	return 0;
	
}
