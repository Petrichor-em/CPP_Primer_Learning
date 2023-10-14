#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	vector<string> v;
	v.push_back("some");
	v.push_back("string");
	for(auto it=v.begin(); it!=v.end(); it++){
		for(auto &c : *it){
			c = toupper(c);
		}
	}
	for(auto it=v.begin(); it!=v.end(); it++){
		cout << *it << " ";
	}
	return 0;

}


