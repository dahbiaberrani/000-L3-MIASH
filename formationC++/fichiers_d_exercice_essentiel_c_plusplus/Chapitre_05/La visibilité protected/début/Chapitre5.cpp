
#include "Developpeur.h"

auto main() -> int {

	Developpeur marc{ "Fabien", "C++" };

	//Personne titi{ "Titi" };

	Personne* ptr = &marc;
	
	return 0;
}