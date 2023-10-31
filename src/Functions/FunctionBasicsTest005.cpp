#include <iostream>
#include <string>
using namespace std;

//compare two string obj
//当函数无需修改引用参数的值时, 最好使用常量引用, 避免拷贝
bool isShorter(const string &a, const string &b){
	if(a.size() < b.size())
		return true;
	else
		return false;
}

int main(void){
	string str1, str2;
	cin >> str1 >> str2;
	if(isShorter(str1, str2))
		cout << str1 << " is shorter";
	else
		cout << str2 << " is shorter";
	return 0;
}
