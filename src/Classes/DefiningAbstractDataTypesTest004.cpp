#include "Person.h"
using std::endl;
using std::cin;
using std::cout;
int main(){
	Person p1;
	print(cout, p1) << endl;
	Person p2("liu", "Paradise");
	print(cout, p2) << endl;
	Person p3(cin);
	print(cout, p3) << endl;
	return 0;
}
