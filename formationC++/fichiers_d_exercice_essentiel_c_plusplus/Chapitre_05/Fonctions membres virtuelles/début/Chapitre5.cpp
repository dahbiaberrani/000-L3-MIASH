
#include "Developpeur.h"

auto main() -> int {

	Developpeur d{ "Fabien", "C++" };
	
	Personne* pd = &d;

	pd->affiche();

	return 0;
}