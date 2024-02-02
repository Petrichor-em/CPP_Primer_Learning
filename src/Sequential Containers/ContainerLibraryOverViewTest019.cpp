#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	list<string> names;
	vector<const char *> oldstyle;	
//	names = oldstyle; // 错误, 容器类型不匹配
	names.assign(oldstyle.cbegin(), oldstyle.cend());
	return 0;
}
