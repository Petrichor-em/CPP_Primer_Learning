#include <iostream>
#include <string>
using namespace std;

typedef bool pf(const string &, const string &);

bool strCmp(const string &, const string &);
void useBigger(const string &, const string &,
				pf *);//pf显式地声明为函数指针
//void useBigger(const string &, const string &,
//	pf);
//	pf被隐式地由函数类型自动转换为函数指针类型

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	useBigger(s1, s2, strCmp);
	return 0;
}

bool strCmp(const string &s1, const string &s2){
	if(s1 > s2){
		return true;
	}else{
		return false;
	}
}

void printBigger(const string &s1, const string &s2,
				pf *cmp){
	if(cmp(s1, s2)){
		cout << s1;
	}else{
		cout << s2;
	}
}
