#include <iostream>
using namespace std;

int get_value();
int main(void){
	/*
	int ival;
	ival = get_value();
	while(ival != 42){
		cin >> ival;
	}
	 */
	//以上功能更好的写法
	int ival;
	while((ival = get_value()) != 42){
	}
	return 0;
}

int get_value(){
	int i;
	cin >> i;
	return i;
}
