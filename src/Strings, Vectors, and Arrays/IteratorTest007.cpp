#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v(20);
	auto it = v.begin();
	auto mid = v.begin() + v.size()/2;
	//两个迭代器相减的返回vector<int>::difference_type类型,是带符号的整型数
	cout << mid - it;
	return 0;
}
