#pragma once

#include <iostream>
#include "Personne.h"

class Developpeur : public Personne {

public:
	auto afficher() -> void {

		std::cout << " Nom : " << get_nom() << std::endl;
	}
};