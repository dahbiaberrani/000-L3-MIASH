#pragma once

class CarteGrise;

class Voiture {

	CarteGrise* cg;

public:

	// Constructeur sans param�tre
	Voiture();

	//  Destructeur
	~Voiture();

	// constructeur copie
	Voiture(const Voiture&);

	// op�rateur affectation
	Voiture& operator=(const Voiture&);

};