#include <iostream>
#include <vector>
using namespace std;

bool cmp(vector<int>vi1, vector<int>vi2);

int main(void){
	vector<int> vi1 = {0, 1, 1, 2, 3, 5, 8};
	vector<int> vi2 = {0, 1, 1, 2};
	if(vi1.size()<vi2.size()){
		cout << cmp(vi1, vi2);
	}else{
		cout << cmp(vi2, vi1);
	}
	return 0;
}

bool cmp(vector<int>vi1, vector<int>vi2){ // vi1 < vi2
	auto iter1 = vi1.begin();
	auto iter2 = vi2.begin();
	while(*iter1==*iter2 && iter1 != vi1.end()){
		++iter1;
		++iter2;
	}
	if(iter1 == vi1.end()){
		return true;
	}else{
		return false;
	}
}
