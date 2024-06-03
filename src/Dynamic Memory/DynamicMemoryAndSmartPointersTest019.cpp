#include <iostream>
#include <memory>

struct Foo{
	int *pInt;
};

Foo *createFoo(int i){
	Foo *foo = new Foo();
	foo->pInt = new int(i);
	return foo;
}

void destroyFoo(Foo *foo){
	std::cout << "destroy function called!" << std::endl;
	delete foo;
}

int main(){
	std::unique_ptr<Foo, void(*)(Foo*)> foo(createFoo(10), destroyFoo);
	std::cout << *foo->pInt << std::endl;
	return 0;
}