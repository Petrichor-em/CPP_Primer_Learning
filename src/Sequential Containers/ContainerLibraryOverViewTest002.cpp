#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi1;
	int nInput;
	for(int i=0; i<5; ++i){
		cin >> nInput;
		vi1.push_back(nInput);
	}
	auto iterBeg = vi1.begin() + 1;
	auto iterEnd = vi1.begin() + 3;
	vector<int> vi2(iterBeg, iterEnd);
	// Show vi2
	for(auto element : vi2){
		cout << element << " ";
	}
	return 0;
}
