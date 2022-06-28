#pragma once

class CarteGrise;

class Voiture {

	CarteGrise* cg;

public:

	// Constructeur sans paramètre
	Voiture();

	//  Destructeur
	~Voiture();

	// constructeur copie
	Voiture(const Voiture&);

	// opérateur affectation
	Voiture& operator=(const Voiture&);

};