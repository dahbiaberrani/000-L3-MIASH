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