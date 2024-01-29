#include <vector>
#include <deque>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi(10, 0);
	int nCounter = 0;
	for(auto &i : vi) i = ++nCounter;
	auto iter = vi.begin() + 5;
	deque<int> di(vi.begin(), iter);
	for(auto i : di) cout << i << " ";
	return 0;
}
