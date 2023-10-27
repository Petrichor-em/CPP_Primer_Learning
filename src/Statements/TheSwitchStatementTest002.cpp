#include <iostream>
#include <string>
using namespace std;

bool getBoolVal();
int getIntVal();

int main(void){
	//试图跳过变量的初始化语句直接跳转到该变量作用域内的另一位置
/*
	bool flag = getBoolVal();
	switch (flag) {
		case true:
			string file_name;
			int ival = 0;
			int jval;
			break;
		case false:
			jval = getIntVal();
			break;
		default:
			break;
  }
*/
	bool flag = getBoolVal();
	switch (flag) {
	case true:
		{
		string file_name;
		int ival = 0;
		int jval;
		}
		break;
	case false:
//		jval = getIntVal(); 错误:jval不在作用域之内
		break;
	default:
		break;
}
