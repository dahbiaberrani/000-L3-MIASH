#pragma once

#include <string>

class Voiture {

private:
	std::string immatriculation{ "default" };
	int vitesse{ 0 };

public:

	auto demarrer() -> void;

};