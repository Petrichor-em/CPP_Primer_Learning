#include <iostream>
#include <vector>
#include <algorithm>

class Hasptr{
friend void swap(Hasptr &lhs, Hasptr &rhs);
public:
	Hasptr(int x = 0) : number(new int(x)) {
		std::cout << "default constructor executed!\n";
	}
	Hasptr(const Hasptr &rhs) {
		number = new int(*rhs.number);
		std::cout << "copy constructor executed!\n";
	}
	~Hasptr() {
		delete number;
	}
	Hasptr &operator=(Hasptr rhs) {
		swap(*this, rhs);	
//		std::cout << "operator= executed!\n";
		return *this;
	}
	int &operator*() {
		return *number;
	}	
	const int &operator*() const {
		return *number;
	}
	bool operator<(const Hasptr &rhs) const {
		return *number < *rhs;
	}

private:
	int *number;
};

void swap(Hasptr &lhs, Hasptr &rhs) {
	std::swap(lhs.number, rhs.number);
	std::cout << "swap() executed!\n";
}

int main() {
	std::vector<Hasptr> vec;
	vec.reserve(8);
	for(int i = 0; i < 5; ++i) {
		vec.emplace_back(10 - i);
	}
	std::cout << "----------sort----------\n";
	std::sort(vec.begin(), vec.end());
	for(const auto &i : vec) {
		std::cout << *i << std::endl;
	}
	return 0;
}