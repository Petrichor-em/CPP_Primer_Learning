#include <iostream>
using namespace std;

int main(void){
	char ch;
	unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0;
	while(cin >> ch){
		switch(ch){
		case 'a': case 'A':
			++aCnt;
			break;
		case 'e': case 'E':
			++eCnt;
			break;
		case 'i': case 'I':
			++iCnt;
			break;
		case 'o': case 'O':
			++oCnt;
			break;
		case 'u': case 'U':
			++uCnt;
			break;
		default:
			;
		}
	}
	cout << aCnt << eCnt << iCnt << oCnt << uCnt << endl;
	return 0;
}
