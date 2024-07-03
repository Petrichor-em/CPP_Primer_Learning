#include <iostream>
#include <memory>
#include <cstring>
#include <algorithm>

class String {
friend std::ostream &operator<<(std::ostream &os, const String &rhs);
public:
	String(const char *s="");
	String(const String &);
	const std::size_t size() const { return first_free - head; }
	std::size_t capacity() { return cap - head; }	
	~String();
private:
	static std::allocator<char> alloc;	
	char *head;
	char *first_free;
	char *cap;	
};

std::allocator<char> String::alloc;

String::String(const char *s) {
	std::size_t len = strlen(s);
	auto data = alloc.allocate(len);
	head = data;
	first_free = cap = data + len;
	const char *it = s;
	while(data != first_free && *it != '\0') {
		alloc.construct(data++, *it++);
	}		
}

String::String(const String &s) {
	auto data = alloc.allocate(s.size());
	head = data;
	cap = first_free = data + s.size();
	const char *src = s.head;
	while(data != first_free && src != s.first_free) {
		alloc.construct(data++, *src++);
	}
}

std::ostream &operator<<(std::ostream &os, const String &rhs) {
	for(const char *it = rhs.head; it != rhs.first_free; ++it) {
		os << *it;
	}
	return os;
}

String::~String() {
	for(char *it = head; it != first_free; ++it) {
		alloc.destroy(it);
	}
	alloc.deallocate(head, size());
}

int main() {
	String str("Hello");
	std::cout << str << std::endl;
	String str2;
	std::cout << str2 << std::endl;
	return 0;
}