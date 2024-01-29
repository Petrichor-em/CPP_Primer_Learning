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
	auto beg = vi.begin();
	auto end = vi.end() - 1;
	auto mid = beg + (end - beg) / 2;
	while(*mid != toFind && (end - beg) > 2){
		if(*mid > toFind) end = mid;
		if(*mid < toFind) beg = mid;
		// update mid
		mid = beg + (end - beg) / 2;
	}
	cout << boolalpha;
	if(*mid == toFind) cout << true;
	else cout << false;
	cout << noboolalpha;
	return 0;
}
