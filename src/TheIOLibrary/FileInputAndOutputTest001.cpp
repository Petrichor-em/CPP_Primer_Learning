#include <fstream>
using namespace std;

int main(){
	ifstream input("D:\\GitRepo\\CPP_Primer_Learning\\src\\TheIOLibrary\\Test1.txt");
	ofstream output("D:\\GitRepo\\CPP_Primer_Learning\\src\\TheIOLibrary\\Test2.txt");
	// paste from Test1.txt to Test2.txt
	char ch;
	while(!input.eof()){
		ch = input.get();
		output << ch;
	}
	return 0;
}
