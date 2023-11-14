#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t sz, const string &word, const string &ending = "s");
string make_plural(size_t sz, const string &word = "SomeWord",
					const string &ending); //添加默认实参

int main(){
	size_t sz;
	string s;
	cin >> sz >> s;
	cout << make_plural(sz, s);
	return 0;
}

string make_plural(size_t sz, const string &word, const string &ending){
	string retVal;
	if(sz > 1){
		retVal = word + ending;
	}else{
		retVal = word;
	}
	
	return retVal;
}
