#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a(10), b;
	int i=0;
	for(auto it=a.begin(); it!=a.end(); it++, i++){
		*it = i;
	}
	//copy
	b = a;
	for(int j : b){
		cout << j << " ";
	}
	return 0;
}

