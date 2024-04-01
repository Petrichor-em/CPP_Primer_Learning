#include <vector>
#include <iostream>

class Person
{
	friend std::ostream &operator<<(std::ostream &os, Person &person);
public:
	Person(const char *str, int i);
private:
	const char *name;
	int age;
};

Person::Person(const char *str, int i) : name(str), age(i) 
{

}

std::ostream &operator<<(std::ostream &os, Person &person)
{
	os << person.name << " " << person.age;
	return os;
}
int main()
{
	std::vector<Person> PersonVec(10, Person("name", 10));
	std::cout << PersonVec[0];
	return 0;
}