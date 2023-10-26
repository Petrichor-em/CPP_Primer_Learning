#include <iostream>
using namespace std;

int main(void){
	int x=0, y=1, someValue=1;
	/*
	  报错:[错误] expected unqualified-id before '--' token
	  int result = someValue? ++x, ++y : --x, --y;
	 */
	someValue? ++x, ++y : --x, --y;
	
	/*
	  逗号运算符的优先级最低,所以上述表达式等价于:
	 */
//	(someValue? ++x, ++y : --x), --y;
	cout << x << " " << y << endl; // x=1 y=1
	return 0;
}
