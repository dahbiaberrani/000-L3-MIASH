#include <iostream>
#include <string>

struct Employe {
	std::string nom;
};


auto visite_medicale(const Employe& e) -> void {

	e.nom = "Toto";
	
}

auto main() -> int {

	Employe henri{ "Henri" };

	visite_medicale(henri);

	return 0;
}




























/*



*/