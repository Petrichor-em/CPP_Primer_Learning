#include <list>
#include <deque>
#include <array>
#include <iostream>
using namespace std;

int main(){
	array<int, 10> arr{1, 2, 3};
	for(auto i : arr) cout << i << " ";
	return 0;
}
