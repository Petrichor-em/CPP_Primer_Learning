// BINARY FIND

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
	return a < b;
}

// If the iterator returned points to end(), it means toFind is not found.

auto binaryFind(vector<int>::iterator beg,
	vector<int>::iterator end, int toFind) -> vector<int>::iterator
{
	auto nbeg = beg, nend = end - 1;
	auto nmid = nbeg + (nend - nbeg) / 2;
	while(*nmid != toFind && (nend - nbeg) > 2){
		if(*nmid > toFind) nend = nmid;
		if(*nmid < toFind) nbeg = nmid;
		// update mid
		nmid = nbeg + (nend - nbeg) / 2;
	}
	if(*nmid == toFind) return nmid;
	else return end; // return end()
}

int main(){
	srand(time(0));
	vector<int> vi(10, 0);
	for(auto &i : vi) i = rand() % 100;
	// Qsort
	sort(vi.begin(), vi.end(), cmp);
	for(const auto &i : vi) cout << i << " ";
	cout << endl;
	int toFind;
	cin >> toFind;
	auto retIter = binaryFind(vi.begin(), vi.end(), toFind);
	cout << boolalpha;
	if(retIter == vi.end()) cout << false;
	else cout << true << " " << retIter - vi.begin() + 1;
	cout << noboolalpha;
	return 0;
}
