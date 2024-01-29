#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi1;
	int nInput;
	for(int i=0; i<5; ++i){
		cin >> nInput;
		vi1.push_back(nInput);
	}
	vector<int> vi2(vi1); // 构造vi1的拷贝vi2
	for(auto i : vi2){
		cout << i << " ";
	}
	return 0;
}
