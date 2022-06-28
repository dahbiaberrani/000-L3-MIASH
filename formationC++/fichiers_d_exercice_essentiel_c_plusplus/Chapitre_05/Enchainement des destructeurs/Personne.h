#pragma once

#include <iostream>
#include <string>

class Personne {

	std::string nom;

public :

	Personne(std::string nom) : nom(nom) {}

	auto get_nom() -> std::string {
		return nom;
	}

	~Personne() {
		std::cout << " dtor de Personne" << std::endl;
	}
};