#include <iostream>
using namespace std;

int get_respond();

int main(void){
	do{
		int v1, v2;
		cout << "Enter two numbers: ";
		if(cin >> v1 >> v2){
			cout << "Sum is " << v1 + v2 << endl;
		}
	}while(cin);
	
//	错误: ival作用域(大括号)达不到while
//	do{
//		int ival = get_respond();
//	}while(iva);
	
	return 0;
}
