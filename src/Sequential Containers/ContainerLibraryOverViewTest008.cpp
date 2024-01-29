#include <vector>
#include <iostream>
using namespace std;

// std::vector::clear TEST

int main(){
	vector<int> vi;
	for(int i=0; i<5; ++i){
		vi.push_back(i + 1);
	}
	cout << boolalpha << vi.empty() << endl;
	vi.clear();
//	cout << noboolalpha;
	cout << vi.empty() << endl;
	cout << noboolalpha;
	return 0;
}
