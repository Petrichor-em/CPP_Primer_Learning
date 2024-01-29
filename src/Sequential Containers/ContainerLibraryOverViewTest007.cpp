#include <vector>
#include <iostream>
using namespace std;

// std::vector::erase TEST

int main(){
	vector<int> vi;
	for(int i=1; i<=5; ++i){
		vi.push_back(i);
	}
	int pos1, pos2;
	cout << "POS1: ";
	cin >> pos1;
	cout << "POS2: ";
	cin >> pos2;
	auto iter_pos1 = vi.begin() + pos1 - 1;
	auto iter_pos2 = vi.begin() + pos2 - 1;
	vi.erase(iter_pos1, iter_pos2);
	for(auto i : vi) cout << i << " ";
	return 0;
}
