#include <iostream>
using namespace std;

int main(){
	/*
	int a[] = {0,2,4,6,8};
	int last = *(a + 4);
	cout << last;  
	 */
	
	//对数组进行下标运算其实是对指向数组元素的指针执行下标运算
	int a[] = {0,2,4,6,8};
	//int i =a[2]; 实质上:
	int *p = a;
	int i = *(p + 2);
	
	int *p1 = &a[2];
	int k = p1[-2]; //相当于把p1指针向前移动两个位置的元素, 但要求结果地址必须指向
//该数组中的元素或尾元素的下一地址		
//	k = a[0];即0
	cout << k;
	return 0;
}
