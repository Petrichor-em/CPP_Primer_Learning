#include <string>
#include <iostream>
#include <cstdio>
class HasPtr{
public:
	const std::string *getPs() const {
		return ps;
	}
	int getI() const {
		return i;
	}
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &init);
	HasPtr &operator=(const HasPtr &rhs);
private:
	std::string *ps = nullptr;
	int i = 0;
};

HasPtr::HasPtr(const HasPtr &init){
	ps = new std::string(*init.getPs());
	*ps = *init.ps;			
	i = init.i;
}

HasPtr &HasPtr::operator=(const HasPtr &rhs){
	delete ps;
	ps = new std::string(*rhs.getPs());	
	i = rhs.getI();
	return *this;
}

int main(){
	HasPtr hp1("aaabbb");
	HasPtr hp2 = hp1;
	std::cout << *hp1.getPs() << "\n" << hp1.getI() << "\n";
	HasPtr hp3;
	hp3 = hp1;
	std::cout << *hp1.getPs() << "\n" << hp1.getI() << "\n";
	return 0;
}
