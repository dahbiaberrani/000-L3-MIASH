#pragma once

#include <iostream>
#include <string>

class Personne {

	std::string nom;

protected:
	auto get_nom() -> std::string {
		return nom;
	}

public :

	Personne(std::string nom) : nom(nom) {}

	virtual auto affiche() -> void {
		std::cout << " Nom : " << nom ;
	}

	virtual ~Personne() {
		std::cout << " dtor personne" << std::endl;
	}

	virtual auto parler() -> void = 0;
};