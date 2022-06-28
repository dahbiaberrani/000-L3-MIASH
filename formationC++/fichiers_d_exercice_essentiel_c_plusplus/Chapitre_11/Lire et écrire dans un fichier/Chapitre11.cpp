#include <iostream>
#include <fstream>

auto ecrire_dans_un_fichier() -> bool {
		
	std::ofstream fichier{ "fichier.txt" };

	if (!fichier) return false;

	fichier << 1961 << "Bjarne_Stroustrup";

	bool retval = fichier.good();

	fichier.close();

	return retval;
}


auto lire_le_fichier() -> bool {

	std::ifstream fichier{ "fichier.txt" };

	if (!fichier) return false;

	int annee;
	fichier >> annee;
	std::cout << annee << std::endl;


	std::string nom;
	fichier >> nom;
	std::cout << nom << std::endl;

	fichier.close();

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