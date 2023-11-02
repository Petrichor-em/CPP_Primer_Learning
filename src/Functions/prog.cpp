#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char **argv){
	string out = strcat(argv[1], argv[2]);
	cout << out << endl;
	return 0;
}
