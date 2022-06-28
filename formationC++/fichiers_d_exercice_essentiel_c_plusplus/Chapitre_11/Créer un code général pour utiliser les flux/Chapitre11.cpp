#include <iostream>
#include <fstream>

struct A {
	int data;
};

std::ostream& operator << (std::ostream& os, const A& a) {
	return os << " A vaut " << a.data;
}

auto main() -> int {


	std::cout << A{ 4 };

	std::ofstream fichier{ "fichier.txt" };
	fichier << A{ 5 };


	return 0;
}