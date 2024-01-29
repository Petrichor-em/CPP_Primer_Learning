#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi(10,0);
	vector<int>::reference rvi = vi[0];
	rvi = 1;
	for(auto i : vi) cout << i << " ";
	return 0;
}
