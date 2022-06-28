
#include <iostream>
#include <string>
#include <sstream>

#include <map>

auto main() -> int {

	std::map<char, int> compteur;

	std::string ligne;
	std::getline(std::cin, ligne);

	for (auto l : ligne) {
		compteur[l] ++;
	}

	for (auto entree : compteur) {
		std::cout << entree.first << " -> " << entree.second << std::endl;
	}

	return 0;
}