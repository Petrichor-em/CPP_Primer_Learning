#include <iostream>
#include <string>
using namespace std;

//reference is the best!!
auto func() -> string (&)[10]
{
	static string arr[10] = {"Hello", "World"};
	return arr;
}

int main(){
	string (&ptr)[10] = func();
	for(string s : ptr){
		cout << s << " ";
	}
	return 0;
}
