#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s = "word";
	string s1 = s + ((s[s.size()-1]=='s')? "" : "s");
	cout << s1;
	return 0;
}
