#include <iostream>
#include <stdexcept>
using namespace std;

int main(void){
	int a, b;
	while(cin >> a >> b){
		try{
			if(b == 0)
				throw runtime_error("divisor can't be 0!");
			cout << a / b;
			break;
		}catch(runtime_error err){
			cout << err.what()
				 << "\nTry Again? y or n:";
			char msg;
			cin >> msg;
			if(!cin || msg == 'n')
				break;
		}
	}
	return 0;
}
