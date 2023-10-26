#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

int main(void){
	constexpr size_t size = 5;
	int ia[size] = {1, 2, 3, 4, 5};
	for(int *ptr=ia, ix=0; 
		ix!=size && ptr!=ia+size;
		++ptr, ++ix){
		/*...*/
	}
}
