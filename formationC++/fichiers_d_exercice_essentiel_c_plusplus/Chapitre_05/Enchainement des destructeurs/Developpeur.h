#pragma once

#include <iostream>
#include "Personne.h"

class Developpeur : public Personne {

public:

	Developpeur(std::string nom) : Personne(nom) {
		
	}

	auto afficher() -> void {

		std::cout << " Nom : " << get_nom() << std::endl;
	}

	~Developpeur() {
		std::cout << " dtor de Developpeur" << std::endl;
	}
};