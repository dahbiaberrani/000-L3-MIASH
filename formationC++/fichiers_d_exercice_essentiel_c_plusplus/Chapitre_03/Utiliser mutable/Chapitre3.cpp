#include <string>

struct Ecran {
	int largeur;
	int hauteur;

	mutable int curseur;

	auto afficher(std::string msg) const -> void {
		///

		curseur += msg.length();

	}
};

auto main() -> int {

	Ecran ecr;

	ecr.afficher("hello");

	return 0;
}




























/*



*/