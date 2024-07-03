#include <iostream>
#include <map>
#include <string>

int main() {
	std::multimap<std::string, std::string> author_to_works {
		{"Van Gogh", "Selfportrait"},
		{"Van Gogh", "Backyards of Old Houses in Antwerp in the Snow"},
		{"Van Gogh", "Cafe Terrace at Night"},
		{"Paul Gauguin", "Vision after the Sermon"},
		{"Paul Gauguin", "The Swineherd, Brittany"},
		{"Paul Gauguin", "The Yellow Christ"},
		{"Monet", "Sunrise"},
		{"Monet", "La Rue Montorgueil à Paris, fête du 30 juin"},
		{"Monet", "Les bateaux rouges, Argenteuil"}
	};
	// print
	for(const auto &i : author_to_works) {
		std::cout << i.first << ", and his works is: " << i.second << std::endl;
	}
	// delete Paul Gauguin
	author_to_works.erase("Paul Gauguin");
	//delete someone not in the map
	author_to_works.erase("Some One");
	std::cout << "-----------------after-delete--------------------\n";
	for(const auto &i : author_to_works) {
		std::cout << i.first << ", and his works is: " << i.second << std::endl;
	}
	// print Monet with his works
	std::cout << "---------------Monet-and-his-works-------------\n";
	for(auto rg = author_to_works.equal_range("Monet"); rg.first != rg.second; ++rg.first) {
		std::cout << rg.first->first << ", and his work is: " << rg.first->second << std::endl;
	}
	return 0;
}