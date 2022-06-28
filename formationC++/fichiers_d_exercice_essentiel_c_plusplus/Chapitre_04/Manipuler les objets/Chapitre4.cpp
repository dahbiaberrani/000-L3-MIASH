
#include "Voiture.h"

auto main() -> int {

	Voiture titine{"xxx",10};

	titine.demarrer();

	Voiture& mercedes = titine;

	mercedes.demarrer();

	Voiture* ptr = &titine;

	ptr->demarrer();
		
	Voiture* ptrNew = new Voiture;

	ptrNew->demarrer();

	(*ptrNew).demarrer();

}