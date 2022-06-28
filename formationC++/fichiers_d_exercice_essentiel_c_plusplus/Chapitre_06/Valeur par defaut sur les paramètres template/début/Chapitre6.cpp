#include <iostream>
#include <vector>

template<typename Type>
class Pile {
	std::vector<Type> data;
	int index;

public:
	Pile(int taille) : data(taille), index(0) {}

	void empile(Type valeur) {
		std::cout << " empile : " << valeur << std::endl;
		data.push_back(valeur);
		index++;
	}
};

auto main() -> int {
	
	Pile<int> pi{ 10 };
	pi.empile(42);

	return 0;
}