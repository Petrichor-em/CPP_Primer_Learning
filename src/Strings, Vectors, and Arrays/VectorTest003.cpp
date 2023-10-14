//输入一组词, 改为大写形式, 按一个词一行输出
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	vector<char> v;
	for(auto c : s){
		v.push_back(c);
	}
	
	for(auto &c : v){
		c = toupper(c);
	}
	
	for(auto c : v){
		if(isspace(c)){
			cout << endl;
			continue;
		}
		cout << c;
	}
	
	return 0;
	
}




