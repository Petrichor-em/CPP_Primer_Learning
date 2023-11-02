#include <iostream>
#include <string>
#include <iterator>
using namespace std;

//管理指针形参, 要求函数能知道数组(指针)的有效长度
//Method1: 数组包含结束标记

//编写一个C风格字符串的输出函数
void print(const char *cp){
	if(cp) // 检查cp是否是空指针
		while(*cp) // 如果当前元素不是空字符
			cout << *cp++; // 输出当前字符并将指针移到下一位置
}

int main(){
	char c[] = "Hello World.";
	print(c);
	return 0;
}
