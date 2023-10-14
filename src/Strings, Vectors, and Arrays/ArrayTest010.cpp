#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(){
	//比较数组相等
	int a[] = {1,2,3,4,5,6,7}, b[] = {1,2,3,4,5,6,8};
	int *begin_a = begin(a), *end_a = end(a),
	*begin_b = begin(b), *end_b = end(b),
	*pa = begin_a, *pb = begin_b;
	ptrdiff_t size_a = end_a - begin_a,
	size_b = end_b - begin_b;
	if(size_a != size_b){
		cout << "不相等" << endl;
	}else{
		while(pa != end_a){
			if(*pa != *pb){
				cout << "不相等" << endl;
				break;
			}else{
				++pa;
				++pb;
			}
		}
		if(pa == end_a){
			cout << "相等" << endl;
		}
	}
	//比较容器相等
	vector<int> v1(10,1), v2(9,1);
	if(v1 == v2){
		cout << "相等" << endl;
	}else{
		cout << "不相等" << endl;
	}
	return 0;
}
