#pragma once

#include <string>

class Personne {
	std::string nom;

public :
	auto get_nom() -> std::string {
		return nom;
	}
};