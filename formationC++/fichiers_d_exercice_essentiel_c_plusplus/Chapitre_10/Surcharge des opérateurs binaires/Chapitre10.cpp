
class Complexe {

	int reel;
	int img;

	// friend Complexe& operator++(Complexe& obj);
	friend Complexe operator +(const Complexe& g, const Complexe& d);

public:
	Complexe(int a, int b) : reel(a), img(b) {}

	Complexe& operator ++() {
		reel++;
		img++;
		return *this;
	}
};
/*
Complexe& operator++(Complexe& obj) {
	obj.reel++;
	obj.img++;

	return obj;
}
*/

Complexe operator +(const Complexe& g, const Complexe& d) {
	/*
	Complexe retval{ g.reel + d.reel, g.img + d.img };
	return retval;*/
	return Complexe{ g.reel + d.reel, g.img + d.img };
}

auto main() -> int {

	Complexe c1{ 4,5 };

	++c1;

	Complexe c2{ 6,5 };

	c1 = c1 + c2;
	
	return 0;
}