#include <iostream>

struct Voiture {
	void roule() {
		std::cout << "je roule ..." << std::endl;
	}
};


struct Avion {
	void vole() {
		std::cout << "je vole ..." << std::endl;
	}
};

struct SousMarin {
	void plonge() {
		std::cout << "je plonge ..." << std::endl;
	}
};

auto main() -> int {

	Voiture v;
	Avion a;
	SousMarin s;

	

	return 0;
}