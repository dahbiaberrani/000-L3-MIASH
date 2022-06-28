
#include "Voiture.h"
#include "CarteGrise.h"

Voiture::Voiture() {
	cg = new CarteGrise();
}

Voiture::~Voiture() {
	delete cg;
}