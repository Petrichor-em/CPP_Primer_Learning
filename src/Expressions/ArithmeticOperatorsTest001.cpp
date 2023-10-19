#include <iostream>
using namespace std;
int main(){
	//溢出异常
	short short_value = 32767; //short类型占16位, 则表示的最大数是32767
							//0111 1111 1111 1111(BIN) = 32767(DEC)
							//第一位是符号位, 0正1负
	short_value += 1; //1000 0000 0000 0000
						//在内存中, 负数以正数取反码再补码的形式存放
						//反码:每位取反; 补码:从最低进制位加一
						// -32768在内存中的储存形式就是1000 0000 0000 0000
	cout << short_value << endl;
	
	short_value = -32768;
	short_value -= 1;
	cout << short_value << endl;
	return 0;
}
