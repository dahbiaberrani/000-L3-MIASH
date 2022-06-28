#include <iostream>
#include <list>

auto main() -> int {

	std::list<int> liste;

	int tab[] = { 2,6,4,5,6,7,3,4,56,43,42 };

	for (auto v : liste)
	{
		std::cout << " valeur " << v << std::endl;
	}

	

	return 0;
}