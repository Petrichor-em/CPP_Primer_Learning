#include <iostream>
#include <iterator>
using namespace std;

int main(){
	int a[3][4] = {{1}, {2}, {3}};
	int (*p)[4]; //从内而外, 从右而左地去理解
	//表示p是一个指针, 指向四个元素的数组(首地址),
	//数组元素的类型是int
	p = &a[2]; // p指向a的第二个元素, 是一个数组名
				//数组名是单独的一块内存空间, 里面存放了数组的首地址
	//设一个数组arr[4],int (*p)[4] = &arr, 则关系是: p->arr->数组首元素
	for(auto p=a; p!=a+3; ++p){
		for(auto q=*p; q!=*p+4; ++q){
			cout << *q << ' ';
		}
		cout << endl;
	}
	cout << "-------------------------" << endl;
	auto i = *p;
	while(i!=end(a[2])){
		cout << *i << " ";
		++i;
	}
	cout << endl;
	int b[] = {1,2,3,4};
	cout << *b << endl; //1
	return 0;
}
