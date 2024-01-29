#include <list>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	list<int> li{1, 2, 3, 4, 5};
	vector<double> vd(li.begin(), li.end());
	for(auto i : vd) cout << i << " ";
	cout << endl;
	vector<int> vi{1, 2, 3, 4, 5};
	vector<double> vd2(vi.begin(), vi.end());
	for(auto i : vd2) cout << i << " ";
	cout << endl;
	return 0;
}
