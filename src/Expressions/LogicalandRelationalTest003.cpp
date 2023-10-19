#include <iostream>
using namespace std;

int main(){
	int i = 0, j = 1, k = 2;
	if(i!=j<k){ //由左结合律, i!=j返回一个布尔类型的值, 转为int(0或1), 再和k进行比较
		cout << "Test" << endl;
	}
	return 0;
}
