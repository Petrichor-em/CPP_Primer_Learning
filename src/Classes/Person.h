#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
struct Person{
	std::string name;
	std::string address;
	const std::string &get_name() const{
		return name;
	}
	const std::string &get_addr() const{
		return address;
	}
	
//	添加构造函数
//	#1 默认初始化
	Person() = default;
//	#2
	Person(const std::string &n, const std::string &a):
	name(a), address(a) { }
//	#3 标准输入初始化
	Person(std::istream &is){
		is >> name >> address;
	}
	
};

std::istream &read(std::istream &is, Person &individal){
	is >> individal.name >> individal.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &individal){
	os << individal.get_name() << " " << individal.get_addr();
	return os;
}

#endif
