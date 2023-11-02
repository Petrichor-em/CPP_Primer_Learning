#include <iostream>
using namespace std;

void print(int (*matrix)[10], int rowSize){
	for(int i = 0; i != rowSize; ++i){
		for(int i : *matrix){
			cout << i << " ";
		}
		cout << endl;
		++matrix;
	}
}

int main(){
	int num[3][10] = {{0}, {0}, {0}};
	print(num, 3);
	return 0;
}
