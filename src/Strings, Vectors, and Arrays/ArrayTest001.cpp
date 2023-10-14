#include <iostream>
#include <cstddef>
using namespace std;

int main(){
	
	unsigned grade, level[11] = {};
	while(cin >> grade){
		if(grade <= 100){
			++level[grade/10];
		}
	}
	for(int i : level){
		cout << i << " ";
	}
	
	return 0;
}
