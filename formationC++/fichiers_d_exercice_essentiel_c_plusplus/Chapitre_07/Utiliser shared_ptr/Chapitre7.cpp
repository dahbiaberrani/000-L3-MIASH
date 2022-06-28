#include <iostream>
#include <memory>


struct Gateau {
	Gateau() {
		std::cout << "ctor" << std::endl;
	}
	~Gateau() {
		std::cout << "dtor" << std::endl;
	}
};

struct Personne {

	std::shared_ptr<Gateau> le_mien;

	auto donneGateau(std::shared_ptr<Gateau> gat) {
		le_mien = gat;
	}
};

auto main() -> int {

	try {

		auto ptr = std::make_shared<Gateau>();
		
		std::cout << " ref = " << ptr.use_count() << std::endl;

		{
			Personne fabien;
			fabien.donneGateau(ptr);
			std::cout << " ref = " << ptr.use_count() << std::endl;
		}
		
		std::cout << " ref = " << ptr.use_count() << std::endl;
		
		

	}
	catch (...) {
		std::cout << "erreur";
	}

	return 0;
}