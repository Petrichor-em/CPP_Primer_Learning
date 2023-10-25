#include <iostream>
#include <vector>
using namespace std;

int main(void){
	vector<int> vi = {11, 13, 14, 22, 27, 39};
	for(int &i : vi){
		i = (!(i%2==0))? i*2 : i;
	}
	for(const int &i : vi){
		cout << i << " ";
	}
	return 0;
}
