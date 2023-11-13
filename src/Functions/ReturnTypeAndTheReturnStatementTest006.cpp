#include <iostream>
#include <string>
using namespace std;

auto func() -> string (*)[10]
{
	static string arr[10] = {"Hello", "World"};
	return &arr;
}

int main(){
	string (*ptr)[10] = func();
	string *p = *ptr;
	while(!p->empty()){
		cout << *p << "";
		++p;
	}
	return 0;
}
