#include <iostream>
using namespace std;

int main(void){
	char a;
	unsigned vowelCnt = 0;
	while(cin >> a){
		switch(a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			++vowelCnt;
			break;
		}
		//另一种合法形式
		/*
		  switch(a){
		  case 'a': case 'e': case 'i': case 'o': case 'u':
		  ++vowelCnt;
		  break;
		  }
		 */
	}
	cout << vowelCnt << endl;
	return 0;
}
