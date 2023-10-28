#include <iostream>
using namespace std;

int main(void){
	char ch;
	unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0,
	ffCnt=0, flCnt=0, fiCnt=0;
	string s;
	while(cin >> ch){
		s += ch;
	}
	for(string::iterator iter = s.begin();
		iter != s. end();
		++iter){
		switch(*iter){
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
		case 'f':
			if(*(iter+1)=='f'){
				++ffCnt;
			}else if(*(iter+1)=='l'){
				++flCnt;
			}else if(*(iter+1)=='i'){
				++fiCnt;
			}
			break;
		default:
			;
		}
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " "
	<< oCnt << " " << uCnt << " "
	<< ffCnt << " " << flCnt << " " << fiCnt << endl;
	return 0;
}
