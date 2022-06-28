#include <array>

auto fonction(int* tab, int taille) -> int {
	int retval(0);

	for (int i = 0; i < taille; i++) {
		retval += tab[i];
	}

	return retval;
}

auto main() -> int {
		
	int var(42);

	int tab[6];

	tab[0] = 42;
	*(tab+0) = 42;
	tab[5] = 42;
	*(tab + 5) = 42;

	int somme = fonction(tab,6);

	std::array<int, 6> arr;
	int taille = arr.size();

	return somme;
}