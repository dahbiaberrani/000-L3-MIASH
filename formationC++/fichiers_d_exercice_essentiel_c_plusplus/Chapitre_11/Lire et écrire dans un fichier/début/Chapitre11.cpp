#include <iostream>
#include <fstream>

auto ecrire_dans_un_fichier() -> bool {
	bool retval = false;
		
	return retval;
}


auto lire_le_fichier() -> bool {

	
	return true;
}

auto main() -> int {

	auto etat = ecrire_dans_un_fichier();
	if (etat == true) std::cout << "Fichier ecrit" << std::endl;
	else std::cout << "probleme lors de l'ecriture du fichier" << std::endl;

	etat = lire_le_fichier();
	if (etat == true) std::cout << "Fichier lu" << std::endl;
	else std::cout << "probleme lors de la lecture du fichier" << std::endl;
	
	return 0;
}