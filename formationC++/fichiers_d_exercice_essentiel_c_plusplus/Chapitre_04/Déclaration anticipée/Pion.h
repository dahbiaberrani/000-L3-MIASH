#pragma once

#include <string>

class Case;

class Pion {

	Case* position;
	std::string nom;
public:
	auto get_nom() -> std::string {
		return nom;
	}
};