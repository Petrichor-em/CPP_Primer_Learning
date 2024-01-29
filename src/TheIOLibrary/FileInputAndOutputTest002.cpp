#include <fstream>
#include <iostream>
using namespace std;

void process(istream &){
	
}

int main(int argc, char **argv){
	for(auto p = argv + 1; p != argv + argc; ++p){
		ifstream input(*p);
		if(input){
			process(input);
		}else{
			cerr << "couldn't open: " + static_cast<string> (*p);
		}
	} // 每一步input都会离开作用域, 因此会被销毁
	  // 当一个fstream对象被销毁时, close会被自动调用
}
