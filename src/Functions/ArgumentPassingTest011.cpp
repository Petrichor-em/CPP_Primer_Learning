#include <iostream>
#include <iterator>
#include <cstddef>
using namespace std;

//Method3: 形参中含有表示数组大小的参量
void print(const int ia[], const size_t size){
	for(size_t i = 0; i != size; ++i){
		cout << ia[i] << endl;
	}
}

int main(){
	int num[] = {1,2,3,4,5};
	print(num, size(num));
	return 0;
}
