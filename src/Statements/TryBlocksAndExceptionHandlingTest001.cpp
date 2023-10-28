#include <iostream>
#include <stdexcept>
#include "Sales_data.h"
using namespace std;

int main(void){
	Sales_data item1, item2;
	int totalUnits = 0;
	while(cin >> item1.bookNo >> item2.bookNo){
		try{
			if(item1.bookNo != item2.bookNo)
				throw runtime_error("Data must refer to the same BookNo");
			totalUnits = item1.units_sold + item2.units_sold;
			break;
		}catch(runtime_error err){
			cout << err.what()
			<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n')
				break;
		}
	}
	return 0;
}
