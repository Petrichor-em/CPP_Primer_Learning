#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	list<int> lstInt;
	vector<int> vecInt;
	int usrInput = 0;
	while(cin >> usrInput) lstInt.push_back(usrInput);
	cin.clear();
	while(cin >> usrInput) vecInt.push_back(usrInput);
	// COMPARE
	int szVecInt = vecInt.size(), szLstInt = lstInt.size();
	auto begLstInt = lstInt.begin(), iter1 = begLstInt;
	auto begVecInt = vecInt.begin(), iter2 = begVecInt;
	auto endLstInt = lstInt.end();
	auto endVecInt = vecInt.end();
	bool bFlag = false;
	if(szLstInt == szVecInt){
		while(iter1 != endLstInt && iter2 != endVecInt){
			if(*iter1 != *iter2){
				bFlag = true;
				break;
			}
			++iter1, ++iter2;
		}
		if(!bFlag){
			cout << "Equal";
			return 0;
		}
	}
	int szMin = (szLstInt < szVecInt)? szLstInt : szVecInt;
	iter1 = begLstInt, iter2 = begVecInt;
	for(int i=0; i<szMin; ++i){
		if(*iter1 == *iter2){
			++iter1, ++iter2;
			continue;
		}
		if(*iter1 < *iter2) cout << "List < Vector";
		else cout << "List > Vector";
		return 0;
	}
	if(szMin == szLstInt) cout << "List < Vector";
	else cout << "List > Vector";
	return 0;
}
