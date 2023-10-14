#include <vector>
#include <iostream>
using namespace std;

int main(){
	
	int a;
	vector<int> vi, vii;
	while(cin >> a){
		vi.push_back(a);
	}
	for(auto it=vi.begin(); it!=vi.end()-1; it++){
		vii.push_back(*it + *(it+1));
	}
	for(auto it=vii.begin(); it!=vii.end(); it++){
		cout << *it << " ";
	}
	return 0;
	
}
