#include <iostream>
#include <string>

struct Employe {
	std::string nom;

	auto get_nom() const -> std::string {

		//nom = "titi";
		return nom;
	}
};


auto visite_medicale(const Employe& e) -> void {

	// e.nom = "Toto";

	std::string nom = e.get_nom();
	
}

auto main() -> int {

	Employe henri{ "Henri" };

	visite_medicale(henri);

	return 0;
}




























/*



*/