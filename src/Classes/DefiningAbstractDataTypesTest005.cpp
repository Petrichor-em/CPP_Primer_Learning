#include "Person_v2.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
	Person p1;
	Person p2(cin);
	Person p3("Pertrichor", "China", 20);
	p1.getInf(cout) << endl;
	p2.getInf(cout) << endl;
	p3.getInf(cout) << endl;
	return 0;
}
