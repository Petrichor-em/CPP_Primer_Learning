#include <iostream>
#include <string>
using namespace std;

bool find(string s);

int main(void){
	string s = "Hello";
	/* 错误
	while((string::iterator iter != s.end()){
	
	}  
	*/
//	string::iterator iter;
//	while(iter != s.end());
	
//	while(bool status = find("word"));
	/*
	while(bool satus = true){
		cout << "while excuted!";
		break;
	}	  
	*/
	switch (int i = 0) {
	case 0:
		//TODO
		cout << 0;
		break;
	case 1:
		//TODO
		cout << 1;
		break;
	default:
		//TODO
		cout << "default excuted";
		break;
	}
	
	return 0;
}

