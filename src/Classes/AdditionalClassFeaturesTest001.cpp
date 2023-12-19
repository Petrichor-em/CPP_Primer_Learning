#include "Screen.h"
#include <iostream>
using namespace std;
int main(){
	Screen myScreen(5,5,'X');
	myScreen.display(cout);
	cout << endl;
	myScreen.move(4,0).set('#').display(cout);
}
