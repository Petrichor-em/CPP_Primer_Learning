#include <iostream>
using namespace std;

void process_input(istream&);

int main(){
	istream::iostate old_state = cin.rdstate();
	cin.clear();
	process_input(cin);
	cin.setstate(old_state);
	return 0;
}

void process_input(istream &is){
	
}
