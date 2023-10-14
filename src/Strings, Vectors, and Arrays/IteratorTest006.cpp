#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int num;
	vector<int> v;
	while(cin >> num){
		v.push_back(num);
	}
	for(auto it=v.begin(); it!=v.end(); it++){
		*it *= *it;
	}
	for(auto it=v.begin(); it!=v.end(); it++){
		cout << *it << " ";
	}
	return 0;
	
}
