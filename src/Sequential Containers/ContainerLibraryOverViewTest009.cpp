#include <iostream>
#include <vector>
using namespace std;

// std::vector::reverse_iterator TEST

int main(){
	vector<int> vi;
	for(int i=0; i<5; ++i){
		vi.push_back(i + 1);
	}
	for(auto i : vi) cout << i << " ";
	cout << endl;
	vector<int>::reverse_iterator rbeg = vi.rbegin();
	vector<int>::reverse_iterator rend = vi.rend();
	vector<int>::reverse_iterator riter;
	for(riter = rbeg; riter != rend; ++riter){
		cout << *riter << " ";
	}
	return 0;
}
