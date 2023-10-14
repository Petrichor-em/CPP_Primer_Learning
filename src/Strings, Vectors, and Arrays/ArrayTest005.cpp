#include <iostream>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	for(int *beg=a,*end=&a[10]; beg!=end; beg++){
		cout << *beg << " ";
	}
	return 0;
}

