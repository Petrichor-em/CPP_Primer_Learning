#include <iostream>
#include <cstring>
#include <cstdio>
class Iterator{
public:
	Iterator() : str(nullptr), curr(0) { }
	Iterator(char *c_str, std::size_t index) : str(c_str), curr(index) { }
	char &operator*(){
		check("Dereference on illegal position");
		return str[curr];
	}
/*
	const char &operator*() const {
		check("Dereference on illegal position");
		return str[curr];
	}
*/
	void operator++(){
		++curr;
	}
	Iterator operator++(int){
		Iterator copy = *this;
		++curr;
		return *this;
	}
	bool operator==(const Iterator &rhs){
		if(str == rhs.str && curr == rhs.curr){
			return true;
		}
		return false;
	}
	bool operator!=(const Iterator &rhs){
		if ((*this) == rhs) return false;
		return true;	
	}
private:
	char *str;
	std::size_t curr;
	void check(const char *msg) const {
		if(curr >= std::strlen(str)){
			std::printf("%s\n", msg);	
			exit(1);
		}
	}
};

class String{
	friend std::ostream &operator<<(std::ostream &os, String &rhs);
	friend std::istream &operator>>(std::istream &is, String &rhs);
public:
	String(){
		len = 0;
		str = new char[1];
		*str = '\0';
	}
	String(const String &rhs){
		len = rhs.len;
		str = new char[len + 1];
		std::memcpy(str, rhs.str, len + 1);
	}
	String(const char *c_str){
		len = std::strlen(c_str);
		str = new char[len + 1];
		std::memcpy(str, c_str, len + 1);
	}
	String &operator=(const String &rhs){
		len  = rhs.len;
		delete str;
		str = new char[len + 1];
		std::memcpy(str, rhs.str, len + 1);
		return *this;
	}
	char &front(){
		check(0, "front on empty String");
		return *str;
	}
	const char &front() const {
		check(0, "front on empty String");
		return *str;
	}
	char &back(){
		check(0, "back on empty String");
		return *(str + len - 1);
	}
	const char &back() const {
		check(0, "back on empty String");
		return *(str + len - 1);
	}
	char &operator[](std::size_t index){
		check(index, "dereference on illegal position of String");
		return str[index];	
	}			
	const char &operator[](std::size_t index) const {
		check(index, "dereference on illegal position of String");
		return str[index];	
	}			
	String &pop_front(){
		char *c_str = new char[len];	
		std::memcpy(c_str, str + 1, len);
		*this = c_str;
		return *this;
	}
	String &pop_back(){
		check(0, "pop_back on empty String");
		str[len - 1] = '\0';
		--len;
		return *this;
	}
	Iterator begin(){
		Iterator beg(str, 0);
		return beg;
	}
	Iterator end(){
		Iterator end(str, len);
		return end;
	}
private:
	std::size_t len = 0;
	char *str = nullptr;	
	void check(std::size_t index, const char *msg) const {
		if(index >= len){
			std::printf("%s\n", msg);
			exit(1);
		}	
	}	
};

std::ostream &operator<<(std::ostream &os, String &rhs){
	std::printf("%s", rhs.str);	
	return os;
}
std::istream &operator>>(std::istream &is, String &rhs){
	char c_str[255];
	std::scanf("%s", c_str);
	rhs = c_str;
	return is;
}



int main(){
	String string1 = "HHH";
	std::cout << string1 << "\n"; // "HHH"
	String string2(string1);
	std::cout << string2 << "\n"; // "HHH"

	std::cin >> string2;	
	std::cout << string2 << "\n";
	std::cout << string2.front() << "\n";
	std::cout << string2.back() << "\n";
	string2.front() = 'F';
	string2.back() = 'B';
	std::cout << string2 << "\n";
	string2.pop_front();
	string2.pop_back();
	std::cout << string2 << "\n";
	for(auto it = string2.begin(); it != string2.end(); ++it){
		std::cout << *it;
	}
	std::cout << "\n";
//	String string3;
//	std::cout << string3.front();
//	std::cout << string3.back();
	return 0;
}