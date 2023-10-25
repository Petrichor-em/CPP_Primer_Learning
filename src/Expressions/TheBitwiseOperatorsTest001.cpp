#include <iostream>
using namespace std;

int main(void){
	unsigned long quiz1 = 0;
	quiz1 |= 1UL << 27; // 保持其它位不变, 将第27位置1
	cout << quiz1 << endl;
	quiz1 &= ~(1UL << 27); // 保持其它位不变, 将第27位置0
	cout << quiz1 << endl;
	return 0;
}
