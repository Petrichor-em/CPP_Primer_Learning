#include <memory>
#include <utility>
#include <string>
#include <iostream>
#include <algorithm>
#include <initializer_list>

class StrVec {
public:
	StrVec() :
		elements(nullptr), first_free(nullptr), cap(nullptr) { }
	StrVec(const StrVec &);
	StrVec(StrVec &&) noexcept;
	StrVec(std::initializer_list<std::string>);
	StrVec &operator=(const StrVec &);
	StrVec &operator=(StrVec &&) noexcept;
	~StrVec();
	void push_back(const std::string &);
	size_t size() const { return first_free - elements; }
	size_t capacity() { return cap - elements; }
	std::string *begin() const { return elements; }
	std::string *end() const { return first_free; }
private:
	static std::allocator<std::string> alloc;
	void chk_n_alloc() {
		if(size() == capacity()) reallocate();	
	}
	std::pair<std::string *, std::string *>
	alloc_n_copy(const std::string *, const std::string *);
	void free();
	void reallocate();
	std::string *elements;
	std::string *first_free;
	std::string *cap;
};

std::allocator<std::string> StrVec::alloc;

StrVec::StrVec(const StrVec &rhs) {
	auto p = alloc_n_copy(rhs.begin(), rhs.end());
	elements = p.first;
	cap = first_free = p.second;
}

StrVec::StrVec(StrVec &&s) noexcept :
	elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	s.elements = s.first_free = s.cap = nullptr;
}

StrVec::StrVec(std::initializer_list<std::string> il) {
	auto data = alloc_n_copy(il.begin(), il.end());
	elements = data.first;
	first_free = cap = data.second;
}

StrVec &StrVec::operator=(const StrVec &rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	cap = first_free = data.second;
	return *this;
}

StrVec &StrVec::operator=(StrVec &&rhs) noexcept {
	if(this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		first_free = rhs.first_free;	
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}

StrVec::~StrVec() {
	free();
}

void StrVec::push_back(const std::string &s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

std::pair<std::string *, std::string *> StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
	auto data = alloc.allocate(e - b);
	return std::make_pair(data, std::uninitialized_copy(b, e, data));
}

/*
void StrVec::free() {
	if(elements) {
		std::string *p = elements;
		while(p != first_free) {
			alloc.destroy(p++);		
		}	
		alloc.deallocate(elements, cap - elements);
	}
}
*/

void StrVec::free() {
	int counter = 0;
	auto destroyer = [&counter](std::string &str) {
		alloc.destroy(&str);
		std::cout << "destroyer execute " << ++counter << " times\n";
	};
	std::for_each(elements, first_free, destroyer);
	alloc.deallocate(elements, capacity());
}

void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for(std::size_t i = 0; i < size(); ++i) {
		alloc.construct(dest++, std::move(*elem++));
	}	
	free();
	elements = newdata;
	first_free = dest;
	cap = newdata + newcapacity;	
}

int main() {
	StrVec vec;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	vec.push_back("Hello");
	std::cout << vec.size() << '\t' << vec.capacity() << std::endl;
	StrVec vec2(vec);
	std::cout << vec2.size() << '\t' << vec2.capacity() << std::endl;
	StrVec vec3{ "Hello", "World", "I", "Love", "You" };
	for (auto i : vec3) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}