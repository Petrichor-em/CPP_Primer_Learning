#include <iostream>
#include <string>
using namespace std;

//如何让函数返回多个值?
//eg: 定义一个名为find_char的函数, 它能返回指定字符第一次出现的位置和出现的总次数
//Method1: 定义新的数据类型,包含位置和次数两个成员

struct char_inf{
	string::size_type loc;
	string::size_type time;
};

char_inf find_char(const string &str, const char &c){
	static char_inf ci;
	for(string::size_type i=0; i<str.size(); ++i){
		if(str[i] == c){
			ci.loc = i;
			break;
		}
	}
	for(const char &cc : str)
		if(cc == c)
			++ci.time;
	return ci;
}

int main(void){
	string s;
	char c;
	cin >> s >> c;
	char_inf ci = find_char(s, c);
	cout << ci.loc << " " << ci.time << endl;
	return 0;
}
