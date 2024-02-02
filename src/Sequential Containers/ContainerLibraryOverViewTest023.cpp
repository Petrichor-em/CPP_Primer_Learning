#include <array>
#include <iostream>
#include <type_traits>
using namespace std;

int main(){
	array<int, 3> arr1{1, 2, 3};
	array<int, 3> arr2{4, 5, 6};
	auto iter_arr1 = arr1.begin();
	auto iter_arr2 = arr2.begin();
	swap(arr1, arr2);
	cout << "arr1: ";
	for(int i = 0; i < 3; ++i)
		cout << *iter_arr1++ << " ";
	cout << "\narr2: ";
	for(int i = 0; i < 3; ++i)
		cout << *iter_arr2++ << " ";

	return 0;
}
