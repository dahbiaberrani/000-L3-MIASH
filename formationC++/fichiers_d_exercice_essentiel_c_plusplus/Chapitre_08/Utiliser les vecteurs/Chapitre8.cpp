
#include <vector>

std::vector<int> un_tableau_dynamique;
#include <iostream>
#include <vector>

auto main() -> int {

	std::vector<int> vi;

	for (int i = 0; i < 50; i++) {

		std::cout << " taille " << vi.size() << std::endl;
		std::cout << " capacite : " << vi.capacity() << std::endl;

		vi.push_back(i);
	}


	for (int i = 0; i < vi.size(); i++) {
		std::cout << vi[i] << std::endl;
	}

	// itérateurs
	for (auto v : vi) {
		std::cout << v << std::endl;
	}

	return 0;
}