#include <fstream>
#include <iostream>
using namespace std;

int main(){
	cin.clear();
	cin.setstate(ios_base::failbit);
	cout << cin.fail() << endl;
	cout << cin.bad() << endl;
	cin.setstate(ios_base::badbit);
	cout << cin.fail() << endl;
	cout << cin.bad() << endl;
//	cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
	cin.clear(ios_base::failbit);
	cin.clear(ios_base::goodbit);
	cout << cin.fail() << endl;
	cout << cin.bad() << endl;
	return 0;
}
