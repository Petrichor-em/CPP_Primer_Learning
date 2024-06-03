#include <iostream>
#include <string>

class Base{
public:
	Base(std::string name) : basename(name) { }
	std::string name() { return basename; }
	virtual void print(std::ostream &os) { os << basename << "\n"; }
private:
	std::string basename;
};

class Derived : public Base {
public:
	Derived(std::string name, int para_i) :Base(name), i(para_i) { }
	void print(std::ostream &os) override { Base::print(os); os << i << "\n"; };
private:
	int i;
};

int main(){
	Base b("base");
	Derived d("Derived", 1);
	Base &bind = b;
	bind.print(std::cout);
	bind = d;
	d.print(std::cout);
	return 0;
