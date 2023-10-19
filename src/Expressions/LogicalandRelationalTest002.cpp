#include <iostream>
using namespace std;

int main(void){
	const char *cp = "HelloWorld!";
	if(cp && *cp){ //若cp不是空指针,则表达式左侧为真
		cout << "Test" << endl;		//若cp所指向的char字符不是空字符(ascii码为0),则为真
	}
	return 0;
}
