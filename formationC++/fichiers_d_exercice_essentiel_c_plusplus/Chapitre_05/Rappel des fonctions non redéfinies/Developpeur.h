#pragma once

#include <iostream>
#include <string>
#include "Personne.h"

class Developpeur : public Personne {

	std::string langage;

public:

	Developpeur(std::string nom, std::string langage) : Personne(nom), langage(langage) {}

	/*virtual*/ auto affiche() -> void override {
		Personne::affiche();
		std::cout  << " langage "<< langage << std::endl;
	}
};