#include <iostream>
#include <iterator>
using namespace std;

int main(void){
	//static_cast
	int i=3, j=4;
	double slope = static_cast<double>(i) / j;
	cout << slope << endl;
	//将void*转换为原来的类型
	void *p = &i;
	int *q = static_cast<int*>(p);
	cout << *q << endl;
	//强制转换类型与原类型不符, 将产生未定义的后果
	/*
	double *r = static_cast<double*>(p);
	cout << *r << endl;
	return 0;	  
	 */
	//const_cast 改变底层const
	const char *cp = "HelloWorld";
	cout << cp << endl;
	//错误:const_cast只改变常量属性
	//const_cast<string> (cp);
	const string cq = static_cast<string> (cp);
	cout << cq << endl;
	int x = 10;
	const int *y = &x;
//	cout << *y << endl;
//	y是指向常量的指针
//	int *z = y;		报错:const int*转换为int*
	int *z = const_cast<int*> (y);
	cout << *z << endl;
	const int m = 42;
	const int *n = &m;
//	cout << *n << endl;
//	使用const_cast去除底层const
	int *s = const_cast<int*> (n);
	cout << *s << endl; // 输出42
	*s = 45;
	cout << *s << endl; //45
	cout << "m的值是" << m <<endl; // 42..奇怪
	return 0;
}
