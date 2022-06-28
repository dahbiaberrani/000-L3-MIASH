#pragma once

#include <iostream>

class CarteGrise {
public:
	CarteGrise() {
		std::cout << "Construction de carte grise" << std::endl;
	}
	~CarteGrise() {
		std::cout << "Destruction de carte grise" << std::endl;
	}
};