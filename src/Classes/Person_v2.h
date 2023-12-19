#ifndef PERSON_H

#define PERSON_H
#include <string>
#include <iostream>
class Person{
public:
	Person() = default;
	Person(const std::string &na, const std::string &addr, unsigned ag):
	name(na), address(addr), age(ag){ }
	Person(std::istream &is){
		is >> name >> address >> age;
	}
	
	std::ostream &getInf(std::ostream &os){
		os << name << " " << address << " " << age;
		return os;
	}
	
private:
	std::string name;
	std::string address;
	unsigned age = 0;
};

#endif
