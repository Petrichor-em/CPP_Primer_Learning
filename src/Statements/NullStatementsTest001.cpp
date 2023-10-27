#include <iostream>
#include <vector>
using namespace std;

int main(void){
	//最常见的空语句导致的错误
	//真正的循环体是条件后面跟的空语句
	vector<int> i(5,0);
	auto iter = i.begin();
	while(iter!=i.end());
		++iter;
	return 0;
}
