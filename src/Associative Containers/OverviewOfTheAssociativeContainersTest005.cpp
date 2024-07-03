#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <fstream>

typedef std::map<std::string, std::string> map;

map *buildMap(std::ifstream &map_file) {
	map *trans_map = new map();
	std::string key, value;
	while(map_file >> key && std::getline(map_file, value)) {
		(*trans_map)[key] = value.substr(1);
	}
	return trans_map;
}

const std::string &transform(const std::string &s, const map &trans_map) {
	auto map_it = trans_map.find(s);
	if(map_it != trans_map.end()) {
		return map_it->second;
	} else {
		return s;
	}
}

int main() {
	std::ifstream ifs("./mappingrule");
	map *trans_map = buildMap(ifs);
	ifs.close();
	std::string text;
	std::string line;
	ifs.open("./original_text");
	while(std::getline(ifs, line)) {
		std::istringstream iss(line);
		std::string word;
		while(iss >> word) {
			text.append(transform(word, *trans_map) + " ");
		}
		*(text.end() - 1) = '\n';
	}
	std::cout << text;
	return 0;
}