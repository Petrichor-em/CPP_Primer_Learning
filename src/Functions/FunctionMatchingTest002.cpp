#include <iostream>
using namespace std;

void calc(char *, char *){
	
}
//重复定义
//void calc(char *const, char *const){
//	
//}

 int main(){
	char a, b;
	char *pa = &a, *pb = &b;
	calc(pa, pb);
	return 0;
 }

