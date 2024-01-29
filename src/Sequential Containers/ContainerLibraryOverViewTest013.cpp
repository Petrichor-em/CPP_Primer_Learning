#include <list>
#include <iostream>
using namespace std;

int main(){
	list<int> lst(5, 0);
	int nCounter = 0;
	for(auto &i : lst) i = ++nCounter;
	for(auto i : lst) cout << i << " ";
	cout << endl;
	auto iter1 = lst.begin(),
		 iter2 = lst.end();
	while(iter1 != iter2){
		*iter1++ = ++nCounter;
		// forward_list's iterators DO NOT support operator--
	}
	for(auto i : lst) cout << i << " ";
	cout << endl;
	return 0;
}
