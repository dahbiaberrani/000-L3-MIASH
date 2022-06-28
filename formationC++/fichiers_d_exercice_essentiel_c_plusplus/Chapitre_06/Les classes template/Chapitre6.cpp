

class Pile {

	int* data;
	int index;

public : 
	Pile(int taille) : index(0) {
		data = new int[taille];
	}

	void empile(int valeur) {
		data[index++] = valeur;
	}

	// à suivre

};


auto main() -> int {

	Pile maPile(10);
	maPile.empile(42);

	return 0;
}