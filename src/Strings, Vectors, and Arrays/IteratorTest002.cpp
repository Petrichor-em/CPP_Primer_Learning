#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string s("some string");
	for(auto it=s.begin(); it != s.end(); it++){
		*it = toupper(*it);
	}
	
	cout << s;
	
	return 0;
	
}




