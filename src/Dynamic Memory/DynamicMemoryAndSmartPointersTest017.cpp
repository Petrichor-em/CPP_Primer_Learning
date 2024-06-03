#include <iostream>
#include <memory>
#include <vector>

class Foo{
public:
	Foo();
	int a;
	std::vector<int> *iVec;
};

Foo::Foo(){
	a = 0;
	iVec = nullptr;
}

Foo *createFoo(){
	Foo *foo = new Foo();
	foo->a = 42;
	foo->iVec = new std::vector<int>();
	for(int i=0; i<10; ++i){
		foo->iVec->push_back(i);
	}	
	return foo;
}

void destroyFoo(Foo *foo){
	delete foo->iVec;
}

void f(){
	std::shared_ptr<Foo> foo(createFoo(), destroyFoo);
	std::cout << foo->a << "\n";
	for(int i : *foo->iVec){
		std::cout << i << " ";
	}
	return;
}

int main(){
	f();
	return 0;
}