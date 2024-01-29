#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi;
	int nInput;
	for(int i=0; i<5; ++i){
		cin >> nInput;
		vi.push_back(nInput);
	}
	cout << vi.size() << endl;
	cout << vi.max_size() << endl;
	cout << boolalpha << vi.empty() << endl;
	return 0;
}
