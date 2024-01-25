#include <iostream>
using namespace std;

istream &echo(istream &is){
	char c;
	while(!is.eof()){
		is.get(c);
		cout << c;
	}
	is.clear();
	return is;
}

int main(){
	echo(cin);
	return 0;
}
