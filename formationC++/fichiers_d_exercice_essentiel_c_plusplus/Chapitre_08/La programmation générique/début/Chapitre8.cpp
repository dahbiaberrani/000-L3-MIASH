#include <iostream>

auto somme(int* tab, size_t taille) -> int {
	int retval = 0;

	for (int i = 0; i < taille; i++) {
		if(tab[i]%2==0) retval += tab[i];
	}
	return retval;
}

auto main() -> int {

	int tab[] = { 5,9,7,9,5,1,1,9,20,3,5,3,5,7,3,5,7,7,9,2,3,7,10,10 };

	auto resultat = somme(tab, 24);
	std::cout << " la somme est " << resultat << std::endl;

	return 0;
}