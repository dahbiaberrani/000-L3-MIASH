

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
		data[index++] = valeur;
	}

};

auto main() -> int {

	Pile pi{ 3 };

	for (int i = 0; i < 3; i++) pi.push(i);

	return 0;
}