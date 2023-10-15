#include <iostream>
#include <iterator>
using namespace std;

int main(){
	//使用iterater头文件中的begin和end函数来简化指针访问多维数组
	int a[3][4] = {{1},{2},{3}};
	for(auto p=a; p!=end(a); p++){
		for(auto q=begin(*p); q!=end(*p); q++){
			cout << *q << " ";
		}
		cout << endl;
	}
	return 0;
}
