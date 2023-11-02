#include <iostream>
#include <iterator>
using namespace std;

//Method2: 传递指向数组首元素的指针和尾后元素的指针
void print(const int *beg, const int *end){
	//输出beg到end的所有元素
	while(beg != end){
		cout << *beg++; // 输出当前元素并将指针移到下一位置
	}
}

int main(){
	int num[] = {1,2,3,4,5};
	print(begin(num), end(num));
	return 0;
}

	
