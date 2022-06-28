#include <iostream>

#include "MonException.h"

class Pile {

	int* data;
	int index;
	int taille;

public:
	Pile(int taille) : index(0), taille(taille) {
		data = new int[taille];
	}

	~Pile() {
		delete[] data;
	}

	void push(int valeur) {
		if (index > taille - 1) throw PushOnFullException("Erreur de pile debordee", taille, index);
		data[index++] = valeur;
	}

};

auto main() -> int {
	try {
		Pile pi{ 3 };
			
		for (int i = 0; i < 10; i++) pi.push(i);

	}
	catch (PushOnFullException& ex) {
		std::cout << " Erreur " << ex.print() << std::endl;
	}
	catch (PileException& ex) {
		std::cout << " Erreur générale " << ex.print() << std::endl;
	}
	catch (...) {
		std::cout << "inconnue";
	}


	return 0;
}