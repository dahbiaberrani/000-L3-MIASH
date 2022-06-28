#include <iostream>
#include <vector>

template< typename Type=int, typename Conteneur = std::vector<Type>,typename Index=int, Index taille = 100>
class Pile {
	Conteneur data;
	Index index;

public:
	Pile() : data(taille), index(0) {}

	void empile(Type valeur) {
		std::cout << " empile : " << valeur << std::endl;
		data.push_back(valeur);
		index++;
	}
};

auto main() -> int {
	
	Pile<> pi;
	pi.empile(42);


	return 0;
}