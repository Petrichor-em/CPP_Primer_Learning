#include <array>
#include <iostream>
#include <type_traits>
using namespace std;

int main(){
	array<int, 10> arr1{0}; // 0, 0, ..., 0
	array<int, 10> arr2{1}; // 1, 0, ..., 0
	swap(arr1, arr2);
	for(auto i : arr1) cout << i << " ";
	cout << endl;
	for(auto i : arr2) cout << i << " ";
	return 0;
}
