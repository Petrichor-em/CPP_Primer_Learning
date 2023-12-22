//如果成员是常量或者引用，必须初始化

class ConstRef {
public:
	ConstRef(int ii);
private:
	int i;
	const int ci;
	int &ri;
};
//错误:ci和ri必须被初始化
//ConstRef::ConstRef(int ii){
//	i = ii;
//	ci = ii;
//	ri = i;
//}

//正确写法:
ConstRef::ConstRef(int ii): i(ii), ci(ii), ri(ii) { }

int main(){

}
