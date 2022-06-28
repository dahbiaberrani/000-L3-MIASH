
#include "Developpeur.h"

auto main() -> int {

	Personne*  p = new Developpeur("Fabien");
	p->get_nom();


	Developpeur d("Fabien");
	d.get_nom();


	return 0;
}