#include  <iostream>
#include <cassert>
using namespace std;

void print(){
#ifndef NDEBUG
	cerr << __func__ << " Excuted!" << endl;
	cerr << __DATE__ << endl;
	cerr << __TIME__ << endl;
	cerr << __LINE__ << endl;
	cout << __FILE__ << endl;
#endif
}

int main(){
	print();
	return 0;
}
