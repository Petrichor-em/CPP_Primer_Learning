#include <iostream>
using namespace std;

int  main(){
	// int a{3.14}; 初始值列表的赋值方式不能窄化转换
	int a{3}; // 正确
	int b(10.1); //这种初始化方式可以窄化转换
	int ival, jval;
	//赋值运算符满足右结合律
	//靠右的赋值运算jval=0作为靠左的赋值运算符的右侧运算对象
	//赋值运算返回其左侧运算对象, 即返回jval, 而后ival=jval
	ival = jval = 0;
	//多重赋值语句的每个对象要么与右侧运算对象相同, 要么可由右侧运算对象的类型转换得到
	int lval, *mval;
//	lval = mval = 0; 错误,指针类型的对象不能转换为int类型的对象
}
