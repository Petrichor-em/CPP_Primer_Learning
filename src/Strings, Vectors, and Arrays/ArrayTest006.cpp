#include <iostream>
#include <iterator>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *beg = begin(a), *last = end(a);
	while(beg != last){
		cout << *beg << " ";
		beg++;
	}
	return 0;
}
