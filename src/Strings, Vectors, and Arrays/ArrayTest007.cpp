#include <iostream>
#include <cstddef>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *p1 = a;
	int *p2 = &a[4];
	ptrdiff_t diff = p2 - p1; //diff: ptrdiff_t, 定义在cstddef中, 带符号的整形
	cout << diff;
	return 0;
}
