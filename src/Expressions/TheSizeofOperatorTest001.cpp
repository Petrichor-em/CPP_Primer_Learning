#include <iostream>
#include <vector>
using namespace std;

int main(void){
	//sizeof所得值是一个size_t类型
	vector<int> vi(10,0);
	cout << sizeof (vector<int>) << endl;
	cout << sizeof vi << endl;
	cout << sizeof (char) << endl;
	int ia[10] = {0};
	constexpr size_t sz = sizeof ia / sizeof *ia; //数组总大小除以单个元素大小得到元素数量
	cout << sz << endl;
	cout << "-----------------------------------" << endl;
	cout << sizeof (int) << endl;
	cout << sizeof (unsigned int) << endl;
	cout << sizeof (bool) << endl;
	cout << sizeof (double) << endl;
	cout << sizeof (unsigned char) << endl;
	cout << sizeof (unsigned long) << endl;
	cout << sizeof (long long) << endl;
	return 0;
}
