#include <string>
#include <iostream>
class HasPtr{
public:
	const std::string *getPs(){
		return ps;
	}
	int getI(){
		return i;
	}
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &init);
private:
	std::string *ps;
	int i;
};

HasPtr::HasPtr(const HasPtr &init){
	if(!ps){
		delete ps;
	}	
	ps = new std::string();
	*ps = *init.ps;			
	i = init.i;
}

int main(){
	HasPtr hp1("aaabbb");
	HasPtr hp2 = hp1;
	std::cout << *hp2.getPs() << "\n";
	std::cout << hp2.getI() << "\n";
	return 0;
}