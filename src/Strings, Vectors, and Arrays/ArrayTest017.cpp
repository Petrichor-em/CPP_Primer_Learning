#include <iostream>
#include <iterator>
using namespace std;

int main(){
	int ia[3][4] = {{1},{2},{3}};
	//类型别名简化多维数组的指针
	typedef int int_array[4]; //int_array是四个元素的数组类型
	for(int_array *p = ia; p!=end(ia); ++p){ //int_array *p 表明p是一个指针,
		//这个指针指向有四个元素的数组类型的变量, 即该数组的名字
		for(int *q = *p; q!=end(*p); ++q){
			cout << *q << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
