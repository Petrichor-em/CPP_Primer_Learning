#include <iostream>
using namespace std;

int main(int argc, char **argv){
	char **ptr = argv + 1;
	while(*ptr){
		cout << *ptr++ << endl;
	}
	return 0;
}
