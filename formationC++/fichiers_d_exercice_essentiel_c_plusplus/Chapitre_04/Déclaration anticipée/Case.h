#pragma once

#include <string>

class Pion;

class Case {

	Case* suivante;
	std::string nom;

public:
	auto action(Pion* arrivant) -> void;

};