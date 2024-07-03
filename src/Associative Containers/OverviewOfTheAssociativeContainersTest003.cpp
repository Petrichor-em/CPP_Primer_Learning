#include <set>
#include <iostream>

class BookStore{

};

int main() {
	std::multiset<BookStore> bset;
	std::multiset<BookStore>::iterator it = bset.begin();
	return 0;
}