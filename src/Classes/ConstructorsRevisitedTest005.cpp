#include <string>
class NoDefault {
public:
	NoDefault(std::string &str): s(str) { }
	int a;
	double b;
	std::string s;
};

struct A {
	NoDefault my_mem;
	A(NoDefault &no): my_mem(no) { }
};

std::string s("Hello");
//不能为A合成构造函数
NoDefault no(s);
A a(no);
//A a;
