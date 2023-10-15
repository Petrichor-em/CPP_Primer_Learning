#include <iostream>
#include <cstddef>
using namespace std;

int main(){
	//使用范围for语句来访问多维数组
	size_t cnt = 0;
	int a[5][5][5];
	for(auto &i : a){
		for(auto &j : i){
			for(auto &k : j){
				k = cnt;
				++cnt;
			}
		}
	}
	
	//使用范围for语句处理多维数组时,除了最内层的循环外
	//其他所有循环的控制变量都应该是引用类型
	//这是因为如果不用引用, 编译器将自动将数组形式的元素转换为指向首地址的指针
	//这样编译器就会在int*内遍历
	for(const auto &i : a){
		for(auto &j : i){
			for(auto k : j){
				cout << right << k << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
