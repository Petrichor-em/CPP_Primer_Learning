#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi1{1, 2, 3, 4, 5};
	vector<int> vi2{5, 4, 3, 2, 1};
	cout << "before swap: -------------" << endl;
	cout << "\tvi1: ";
	for(auto i : vi1) cout << i << " ";
	cout << endl;
	cout << "\tvi2: ";
	for(auto i : vi2) cout << i << " ";
	cout << endl;
	cout << "after swap:  -------------" << endl;
	swap(vi1, vi2); // vi1.swap(vi2);
	cout << "\tvi1: ";
	for(auto i : vi1) cout << i << " ";
	cout << endl;
	cout << "\tvi2: ";
	for(auto i : vi2) cout << i << " ";
	cout << endl;
	return 0;
}
