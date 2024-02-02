#include <list>
#include <vector>
#include <string>
#include <forward_list>
#include <iostream>
using namespace std;

int main(){
	forward_list<int> iFlist(10, 0);
	iFlist.push_front(2);
	for(auto i : iFlist) cout << i << " ";
	cout << endl;
	iFlist.clear();
	cout << boolalpha << iFlist.empty() << noboolalpha;
	return 0;
}
