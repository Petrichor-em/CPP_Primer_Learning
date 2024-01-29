#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(){
	list<string> a = {"Milton", "Shakespeare", "Austen"};
	auto it1 = a.begin();	// list<string>::iterator
	auto it2 = a.rbegin();	// list<string>::reverse_iterator
	auto it3 = a.cbegin();	// list<string>::const_iterator
	auto it4 = a.crbegin();	// list<string>::const_reverse_iterator
	return 0;
}
