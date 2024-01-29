#include <iostream>
using namespace std;

int main(){
	cout << unitbuf; // 所有输出操作后都会刷新缓冲区
	/* */
	cout << nounitbuf; // 回到正常的缓冲方式
	return 0;
}
