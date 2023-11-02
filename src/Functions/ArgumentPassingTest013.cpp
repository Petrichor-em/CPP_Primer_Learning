#include <iostream>
#include <iterator>
using namespace std;

void print(int matrix[][10], int rowSize){
//	matrix看起来像一个二维数组, 实质上是指向含有10个元素的一维数组的指针
//	不能用范围for遍历指针	
//	for(const auto &p : matrix){		
//	}
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
