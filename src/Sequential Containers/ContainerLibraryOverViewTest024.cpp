#include <string>
#include <iostream>
using namespace std;

int main(){
	string str1("abc"), str2("def");
	auto iter_str1 = str1.begin(),
		 iter_str2 = str2.begin();
	swap(iter_str1, iter_str2);
	cout << "str1: ";
	for(int i=0; i<3; ++i) cout << *iter_str1++ << " ";
	cout << "\nstr2: ";
	for(int i=0; i<3; ++i) cout << *iter_str2++ << " ";
	return 0;
}
