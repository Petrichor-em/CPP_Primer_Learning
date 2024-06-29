#include <string>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

class MyString {
public:
	MyString() = default;
	MyString(std::string s) : str(s) { }
	MyString(const char *s) : str(s) { }
	void print_string() const {
		std::cout << str;
	}
	std::size_t size() const {
		return str.size();
	}
	// 定义了一个偏序关系以供std::sort比较时使用
	bool operator<(const MyString &rhs) const {
		return size() < rhs.size();
	}
	// 定义等价关系
	bool operator==(const MyString &rhs) const {
		return size() == rhs.size();
	}
private:
	std::string str;
};

int main() {
	std::vector<MyString> Mvec{"Hello", "World", "I", "Love", "You"};
	for(const auto &i : Mvec) { i.print_string(); std::cout << " "; }
	std::cout << std::endl;
	auto end_unique = std::unique(Mvec.begin(), Mvec.end());
	for(const auto &i : Mvec) { i.print_string(); std::cout << " "; }
	std::cout << std::endl;
	end_unique->print_string();
	std::cout << std::endl;
	return 0;
}