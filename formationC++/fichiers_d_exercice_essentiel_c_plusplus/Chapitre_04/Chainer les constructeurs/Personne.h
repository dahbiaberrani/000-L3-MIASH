#pragma once

#include <string>

class Personne {

	std::string nom;
	std::string prenom;

public:

	Personne(std::string nom) {
		this->nom = nom;
	}
	Personne(std::string nom, std::string prenom) {
		this->nom = nom;
		this->prenom = prenom;
	}
	
};