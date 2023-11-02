#include <iostream>
using namespace std;

//Method2: 通过引用隐式的传递返回值
string::size_type find_char(const string &s, char c,
							string::size_type &occurs)
{
	auto ret = s.size(); //声明ret的类型是string::size_type
	occurs = 0;
	for(decltype(ret) i = 0; i != s.size(); ++i){
		if(s[i] == c){
			if(ret == s.size()){
				ret = i;
			}
			++occurs;
		}
	}
	return ret;
}

int main(void){
	string s;
	char c;
	cin >> s >> c;
	string::size_type occurs = 0,
						location = 0;
	location = find_char(s, c, occurs);
	cout << location << " " << occurs << endl;
	return 0;
}
