#include <iostream>
using namespace std;

int main(){
	int a[5][5] = {{1},{2},{3},{4},{5}}; // 剩下的元素初始化为默认值
	int (&b)[5] = a[1]; // 将b绑定到a的第一个维度的第二个元素
	//输出a
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	b[0] = 0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
