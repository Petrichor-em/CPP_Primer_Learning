#include "Screen.h"
#include <iostream>
using namespace std;

int main(){
	Screen::pos ht = 24, wd = 80;
	Screen scr(ht, wd, ' ');
	char c = scr.get();
	Screen *p = &scr;
	c = p->get();
}
