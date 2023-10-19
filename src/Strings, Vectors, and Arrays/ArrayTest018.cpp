#include <iostream>
#include <iterator>
#include <cstddef>
using namespace std;

int main(){
	const size_t row=3, col=4;
	int ia[row][col] = {{1},{2},{3}};
	typedef int int_array[4];
	for(int_array &p : ia){
		for(int q : p){
			cout << q << " ";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	for(size_t i=0; i!=3; ++i){
		for(size_t j=0; j!=4; ++j){
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	typedef int (*intArray)[4];
	for(intArray p=begin(ia); p!=end(ia); ++p){
		for(int *q=*p; q!=end(*p);++q){
			cout << *q << " ";
		}
		cout << endl;
	}
	cout << "----------------------" << endl;
	return 0;
}
