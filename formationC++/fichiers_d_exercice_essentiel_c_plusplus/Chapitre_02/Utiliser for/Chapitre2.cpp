#include <iostream>

auto main() -> int {

	int tab[] = { 2,6,4,5,6,7,3,4,56,43,42 };

	for (auto indice(0); indice < 10; indice++)
	{
		std::cout << " indice " << tab[indice] << std::endl;
	}

	

	return 0;
}