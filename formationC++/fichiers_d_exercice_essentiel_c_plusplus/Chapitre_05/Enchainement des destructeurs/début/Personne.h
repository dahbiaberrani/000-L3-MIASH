#pragma once

#include <string>

class Personne {

	std::string nom;

public :

	Personne(std::string nom) : nom(nom) {}

	auto get_nom() -> std::string {
		return nom;
	}
};