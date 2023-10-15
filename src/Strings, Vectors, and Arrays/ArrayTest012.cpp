#include <iostream>
#include <vector>
#include <iterator>
#include <cstddef>
using namespace std;

int main(){
	//用数组初始化vector
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> vi(begin(a),end(a));
	for(auto it=vi.begin();it!=vi.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	//把vector拷贝给数组
	const size_t size_b = vi.size();
	int b[size_b];
	auto it = vi.begin();
	for(int &i : b){
		i = *it;
		++it;
	}
	for(int i : b){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
