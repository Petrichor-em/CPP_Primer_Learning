#include <iostream>
#include <cstring>
#include <stddef.h>
#include <iterator>
using namespace std;

int main(){
	//比较c风格字符串的内容
	//相应的函数定义在cstring中
	char a[] = "hi you";
	char b[] = "hello you.";
	if(strcmp(a,b)==0){
		cout << "相等" << endl;
	}else if(strcmp(a,b)>0){
		cout << "a大" << endl;
	}else{
		cout << "b大" << endl;
	}
	
	//定义一个字符数组存放两个数组连接之后的结果
	const size_t size_c = (end(a) - a)
		+ (end(b) - b);
	cout << size_c << endl;
	char c[size_c] = {'\0'}; //初始化第一个元素, 其他初始化为默认值0
	char *p = c;
	strcpy(c,a);
	strcat(c,b);
	while(*p){
		cout << *p;
		++p;
	}
	cout << endl;
	cout << c - end(c) << endl;
	return 0;
}
