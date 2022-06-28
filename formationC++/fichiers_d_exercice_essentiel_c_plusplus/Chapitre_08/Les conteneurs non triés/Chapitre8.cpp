
#include <iostream>
#include <string>
#include <sstream>

#include <unordered_map>

struct mon_hash {
	size_t operator() (char v) const {
		return 1;
	}
};

struct mon_equal {
	bool operator() (char a, char b) const {
		return true;
	}
};

auto main() -> int {

	std::unordered_map<char, int, mon_hash, mon_equal> compteur;

	std::string ligne;
	std::getline(std::cin, ligne);

	for (auto l : ligne) {
		// std::cout << std::hash<char>()(l) << std::endl;
		compteur[l] ++;
	}

	for (auto entree : compteur) {
		std::cout << entree.first << " -> " << entree.second << std::endl;
	}

	return 0;
}