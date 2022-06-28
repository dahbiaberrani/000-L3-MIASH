
class Foncteur {
	int data;

public:
	Foncteur(int d) : data(d) {}

	bool operator () (int v) {
		return v > data;
	}
};

auto main() -> int {

	Foncteur f{ 4 };

	auto valeur = f(5);// f.operator()(5);

	return 0;
}