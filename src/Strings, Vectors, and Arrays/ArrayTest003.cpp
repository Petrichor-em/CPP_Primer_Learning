#include <iostream>
#include <cstddef>
using namespace std;

int main(){
	constexpr size_t array_size = 10;
	int a[array_size] = {};
	for(size_t i=0; i!=array_size; i++){
		a[i] = i;
	}
	for(int j : a){
		cout << j << " ";
	}
	cout << endl;
	//copy
	int b[array_size] = {};
	for(size_t i=0; i!=array_size; i++){
		b[i] = a[i];
	}
	for(int j : b){
		cout << j << " ";
	}
	return 0;
}
