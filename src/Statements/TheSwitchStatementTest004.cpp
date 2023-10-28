#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s;
		unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0,
			newLinesCnt=0, blankSpaceCnt=0, tabCnt=0;
	while(getline(cin, s)){
		for(char ch : s){
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
			case ' ':
				++blankSpaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			default:
				;
			}
		}
		++newLinesCnt;
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " "
		<< oCnt << " " << uCnt << " " << blankSpaceCnt << " "
		<< newLinesCnt << " " << tabCnt << endl;
	return 0;
}
