#include <string>
#include <iostream>

#include <map>

auto main() -> int {

	std::multimap<std::string, std::string> heros;

	heros.insert(std::make_pair("Bjarne Stroustrup", "C++"));
	heros.insert(std::make_pair("Bjarne Stroustrup", "ATT"));
	heros.insert(std::make_pair("Bjarne Stroustrup", "IEEE"));

	heros.insert(std::make_pair("Kent Beck", "XP"));
	heros.insert(std::make_pair("Kent Beck", "JUnit"));

	for (auto entree : heros) {
		std::cout << entree.first << " -> " << entree.second << std::endl;
	}

	return 0;
}