class X{
	int i;
	int j;
public:
//	初始化顺序与他们在类中定义的顺序一致
//	X(int val): j(val), i(j) { }
//	最好令构造函数初始值顺序与成员声明保持一致
	X(int val): i(val), j(val) { }
};
