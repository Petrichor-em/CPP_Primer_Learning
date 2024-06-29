#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() {
	std::string s;
	std::vector<std::string> svec;
	while(std::cin >> s) {
		svec.push_back(s);
	}	
	s.clear();		
	s = std::accumulate(svec.begin(), svec.end(), s);
	std::cout << s << std::endl;
}