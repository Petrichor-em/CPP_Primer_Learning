#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vecInt1{1, 2, 3};
	vector<int> vecInt2{1, 2, 4};
	if(vecInt1 == vecInt2) cout << "Equal";
	else cout << "Unequal";
	return 0;
}
