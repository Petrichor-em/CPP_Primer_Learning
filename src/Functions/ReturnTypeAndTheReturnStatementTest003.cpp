#include <iostream>
#include <iterator>
using namespace std;

int &get(int *array, int index){ return array[index]; }

int main(){
	int ia[10];
	for(int i = 0; i != 10; ++i){
		get(ia, i) = i;
	}
	for(int i : ia){
		cout << i << " ";
	}
	return 0;
}
