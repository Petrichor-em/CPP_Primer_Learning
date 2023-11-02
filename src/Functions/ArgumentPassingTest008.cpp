#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool if_contains_upper(const string &str){
	for(const char c : str)
		if(isupper(c))
			return true;
	return false;
}

void toLower(string &str){
	for(char &c : str)
		c = tolower(c);
}

int main(){
	string s;
	cin >> s;
	if(if_contains_upper(s))
		cout << "Has upper" << endl;
	else
		cout << "No upper" << endl;	
	toLower(s);
	cout << s << endl;
	return 0;
}
