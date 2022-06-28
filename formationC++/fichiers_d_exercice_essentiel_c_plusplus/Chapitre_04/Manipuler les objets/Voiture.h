#pragma once

#include <string>

struct Voiture {

  //private:
	std::string immatriculation{ "default" };
	int vitesse{ 0 };

public:

	auto demarrer() -> void;

};