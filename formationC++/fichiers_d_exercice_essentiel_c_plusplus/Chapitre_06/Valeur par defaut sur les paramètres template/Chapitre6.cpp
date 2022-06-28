#include <iostream>
#include <vector>

template<typename Type=int, typename Conteneur = std::vector<Type>, typename Index=int>
class Pile {
	Conteneur data;
	Index index;

public:
	Pile(int taille) : data(taille), index(0) {}

	void empile(Type valeur) {
		std::cout << " empile : " << valeur << std::endl;
		data.push_back(valeur);
		index++;
	}
};

auto main() -> int {
	
	Pile<> pi{ 10 };
	pi.empile(42);

	return 0;
}