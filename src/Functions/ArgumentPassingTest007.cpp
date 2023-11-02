#include <iostream>
using namespace std;

//同时定义下面两个同名函数是错误的, 因为形参会忽略掉顶层const,
//所以这两个函数的形式参数列表实质上没有区别.
void func(const int i);
void func(int i);
