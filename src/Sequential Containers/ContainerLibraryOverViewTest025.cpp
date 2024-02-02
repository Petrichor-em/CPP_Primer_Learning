#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	list<char *> lst{"Hello", "World"};
	vector<string> vecStr{"Hi", "You"};
	vecStr.assign(lst.begin(), lst.end());
	for(const auto &i : vecStr) cout << i << " ";
	return 0;
}
