
#include "Developpeur.h"

auto main() -> int {

	Developpeur*  d  = new Developpeur{ "Fabien", "C++" };
	
	Personne* pd = d;

	delete(pd);

	return 0;
}