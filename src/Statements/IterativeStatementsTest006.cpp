#include <iostream>
#include <cctype>
using namespace std;

int main(void){
	string s, temp;
	while(cin >> s){
		if(islower(s[0]))
			continue;
		if(s == temp){
			cout << s << endl;
			break;
		}else{
			temp = s;
		}
	}
	if(!cin){
		cout << "No repetitive word" << endl;
	}
	return 0;
}
