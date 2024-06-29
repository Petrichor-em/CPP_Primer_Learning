#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main(){
	std::vector<std::string> svec
		{"Hello", "World", "I", "Love", "You", "Ephemeral", "loss", "UpsideDown"};
	auto count = std::count_if(svec.begin(), svec.end(),
		[](const std::string &str) { return str.size() > 6; });
	std::cout << count << std::endl;
	return 0;
}