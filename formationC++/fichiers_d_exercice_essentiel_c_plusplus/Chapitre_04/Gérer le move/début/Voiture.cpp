#include <iostream>

#include "Voiture.h"
#include "CarteGrise.h"

Voiture::Voiture() {
	std::cout << "Construction de voiture" << std::endl;

	cg = new CarteGrise();
}

Voiture::~Voiture() {
	std::cout << "Destruction de voiture" << std::endl;
	delete cg;
}

Voiture::Voiture(const Voiture& origine) {
	cg = new CarteGrise(*origine.cg);
}

Voiture& Voiture::operator=(const Voiture& origine) {
	if (this == &origine) return *this;

	delete cg;
	cg = new CarteGrise(*origine.cg);

	return *this;
}