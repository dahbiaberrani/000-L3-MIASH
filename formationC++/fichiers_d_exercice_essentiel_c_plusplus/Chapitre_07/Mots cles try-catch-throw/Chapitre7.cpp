#include <iostream>

class Pile {

	int* data;
	int index;
	int taille;

public:
	Pile(int taille) : index(0), taille(taille) {
		data = new int[taille];
	}

	~Pile() {
		delete[] data;
	}

	void push(int valeur) {
		if (index > taille - 1) throw "Erreur pile debordee";
		data[index++] = valeur;
	}

};

auto main() -> int {

	Pile pi{ 3 };

	try {
		for (int i = 0; i < 10; i++) pi.push(i);
	}
	catch (const char* ex) {
		std::cout << " Erreur " << ex << std::endl;
	}


	return 0;
}