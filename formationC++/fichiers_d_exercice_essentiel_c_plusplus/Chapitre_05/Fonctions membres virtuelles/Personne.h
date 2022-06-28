#pragma once

#include <iostream>
#include <string>

class Personne {

protected:
	std::string nom;

public :

	Personne(std::string nom) : nom(nom) {}

	virtual auto affiche() -> void {
		std::cout << " Nom : " << nom << std::endl;
	}

};