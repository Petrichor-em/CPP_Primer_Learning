#include <vector>
#include <iostream>
using namespace std;

// std::vector::insert TEST

int main(){
	vector<int> vi1, vi2;
	int nInput;
	for(int i=0; i<5; ++i){
		cin >> nInput;
		vi1.push_back(nInput);
	}
	for(int i=0; i<3; ++i){
		cin >> nInput;
		vi2.push_back(nInput);
	}
	//append
	vi2.insert(vi2.end(), vi1.begin(), vi1.end());

	//output
	for(auto i : vi2){
		cout << i << " ";
	}
	return 0;
}
