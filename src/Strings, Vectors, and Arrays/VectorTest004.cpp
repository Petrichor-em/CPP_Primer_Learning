#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v, u, w;
	int a;
	
	while(cin >> a){
		v.push_back(a);
	}
	
	int temp = 0;
	for(int n : v){
		u.push_back(temp + n);
		temp = n;
	}
	
	for(decltype(u.size()) i=1; i<u.size(); i++){
		cout << u[i] << " ";
	}
	cout << endl;
	
	for(decltype(v.size()) i=0; i<=v.size()/2-1; i++){
		w.push_back(v[i] + v[v.size()-1-i]);
	}
	
	if(v.size()%2!=0){
		w.push_back(v[v.size()/2+1]);
	}
	
	for(int n : w){
		cout << n << " ";
	}
	
	return 0;
	
}

