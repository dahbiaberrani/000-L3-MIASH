#include <iostream>

template<typename... Base>
class Engin : public Base... {
public:
	Engin(const Base& ... base) : Base(base)... {
	}
};

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

	Engin<Voiture> titine{ v };
	titine.roule();

	Engin<Voiture, Avion> fantomas{ v,a };
	fantomas.roule();
	fantomas.vole();

	return 0;
}