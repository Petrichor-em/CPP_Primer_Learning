#include <iostream>
#include <string>
#include <vector>

class Person{

	friend std::ostream &operator<<(std::ostream &os, const Person &person){
		os << person.age << " " << person.name;
		return os;
	}

private:
	int age;
	std::string name;	
public:
	Person(): age(0), name("foo") { }
	Person(int i, std::string str) : age(i), name(str) { }
};

int main(){
	std::vector<Person> personVec(3);
	for(auto &i : personVec)
	{
		std::cout << i << std::endl;
	}	
	personVec.resize(10, Person(20, "My name"));
	std::cout <<  "----- after resize -----" << std::endl;
	for(auto &i : personVec)
	{
		std::cout << i << std::endl;
	}	
	return 0;
}