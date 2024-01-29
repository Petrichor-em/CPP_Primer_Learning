#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<int> vi1{0, 1, 2};
	vi1 = {1, 2, 3};
	vi1 = {2, 3, 4};
	for(auto element : vi1){
		cout << element << " ";
	}
	return 0;
}
