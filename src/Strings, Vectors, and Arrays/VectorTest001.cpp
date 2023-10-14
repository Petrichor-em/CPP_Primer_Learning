#include <iostream>
#include <vector>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::vector;
using std::string;

int main() {

	int a;
	string s;
	vector<int> v;
	while(cin >> a){
		v.push_back(a);
	}
	//
	vector<int>::size_type b = v.size();
		
	return 0;

}
