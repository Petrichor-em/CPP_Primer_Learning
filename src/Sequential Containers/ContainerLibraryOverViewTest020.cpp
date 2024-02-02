#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(){
	list<string> slist1(1); // 1个元素, 为空string
	slist1.assign(10, "Hiya!");
	for(const auto &str : slist1) cout << str << endl;
	return 0;
}
