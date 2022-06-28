#pragma once

class CarteGrise;

class Voiture {

	CarteGrise* cg;

public:

	// constructeur sans paramètre
	Voiture();

	// destructeur
	~Voiture();

	// constructeur copie
	Voiture(const Voiture&);

	// opérateur affectation
	Voiture& operator=(const Voiture&);

	// constructeur de move
	Voiture(Voiture&&);

	// opérateur de move
	Voiture& operator=(Voiture&&);
};