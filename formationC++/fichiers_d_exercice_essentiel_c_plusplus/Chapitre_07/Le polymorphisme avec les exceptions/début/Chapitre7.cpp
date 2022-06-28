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
		if (index > taille - 1) throw MonException("Erreur de pile debordee", taille, index);
		data[index++] = valeur;
	}

};

auto main() -> int {

	Pile pi{ 3 };

	try {
		for (int i = 0; i < 10; i++) pi.push(i);
	}
	catch (MonException& ex) {
		std::cout << " Erreur " << ex.print() << std::endl;
	}


	return 0;
}