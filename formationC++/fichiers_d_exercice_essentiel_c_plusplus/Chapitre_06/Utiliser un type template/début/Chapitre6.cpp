
template<typename T>
class Pile {

	T* data;
	int index;

public : 
	Pile(int taille) : index(0) {
		data = new T[taille];
	}

	void empile(T valeur) {
		data[index++] = valeur;
	}

	// à suivre

};


auto main() -> int {

	Pile<int> maPile(10);
	maPile.empile(42);

	return 0;
}