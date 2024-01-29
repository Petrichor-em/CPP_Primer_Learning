#include <fstream>
#include <iostream>
using namespace std;

int main(){
	char ch;
	ofstream output("D:\\GitRepo\\CPP_Primer_Learning\\src\\TheIOLibrary\\Test3.txt", ios_base::app);
	while(cin.good()){
		if(!cin.eof()){
			cin.get(ch);
			output << ch;
		}
	}
	output.close();
	return 0;
}
