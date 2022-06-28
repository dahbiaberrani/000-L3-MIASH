#include <iostream>

struct Gateau {
	Gateau() {
		std::cout << "ctor" << std::endl;
	}
	~Gateau() {
		std::cout << "dtor" << std::endl;
	}
};

auto main() -> int {

	try {
/*		Gateau* ptr = new Gateau;

		throw "Oups!";

		delete ptr;
		*/

		Gateau obj;
		throw "Oups!";

	}
	catch (...) {
		std::cout << "erreur";
	}

	return 0;
}