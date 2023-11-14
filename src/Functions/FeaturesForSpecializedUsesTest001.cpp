#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(){
	string s;
	cin >> s;
	assert(s.length() > 5);
	cout << "s.length > 5";
	return 0;
}
