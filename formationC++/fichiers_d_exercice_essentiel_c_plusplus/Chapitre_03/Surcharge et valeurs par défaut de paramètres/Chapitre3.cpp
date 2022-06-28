
#include <iostream>
#include <string>
/*
auto envoie_message(std::string nom) -> std::string {
	return "Bonjour " + nom;
}*/

auto envoie_message(std::string nom, std::string formule="Bonjour") -> std::string {
	return formule + nom;
}

auto main() -> int {

	std::cout << " message " << envoie_message("fabien","Salut" ) << std::endl;
	
	return 0;
}

