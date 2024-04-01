#include <vector>
#include <iostream>
#include <string>
class Person{
public:
	std::ostream &print(std::ostream &os)
	{
		os << age << " " << name;
		return os;
	}
	Person() : age(0), name("some name")
	{ 

	}
	Person(int i, std::string s) : age(i), name(s)
	{

	}
private:
	int age;
	std::string name;
};

int main()
{
	std::vector<Person> pvec(5);
	for(auto &i : pvec)
	{
		i.print(std::cout) << "\n";
	}
	std::cout << "-------------------------" << "\n";
//	pvec.insert(pvec.begin(), Person(5, "NAME"));
//	can be replaced by:
	pvec.emplace(pvec.begin(), 5, "NAME");
	for(auto &i : pvec)
	{
		i.print(std::cout) << "\n";
	}
	std::cout << "-------------------------" << "\n";
	pvec.emplace_back(20, "My Name");
	for(auto &i : pvec)
	{
		i.print(std::cout) << "\n";
	}
	return 0;
}