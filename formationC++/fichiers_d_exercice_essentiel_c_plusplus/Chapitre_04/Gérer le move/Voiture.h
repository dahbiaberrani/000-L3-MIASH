#pragma once

class CarteGrise;

class Voiture {

	CarteGrise* cg;

public:

	// constructeur sans param�tre
	Voiture();

	// destructeur
	~Voiture();

	// constructeur copie
	Voiture(const Voiture&);

	// op�rateur affectation
	Voiture& operator=(const Voiture&);

	// constructeur de move
	Voiture(Voiture&&);

	// op�rateur de move
	Voiture& operator=(Voiture&&);
};