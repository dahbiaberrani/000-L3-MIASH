#include <iostream>

class Complexe {

	int reel;
	int img;

	// friend Complexe& operator++(Complexe& obj);
	friend Complexe operator +(const Complexe& g, const Complexe& d);
	friend void operator <<(std::ostream& os, const Complexe& c);

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

std::ostream& operator <<(std::ostream& os, const Complexe& c) {
	return os << "[" << c.reel << " , " << c.img << " ]";
}

auto main() -> int {

	Complexe c1{ 4,5 };

	++c1;

	Complexe c2{ 6,5 };

	c1 = c1 + c2;

	std::cout << c1  << std::endl;

	 // std::cout.operator <<(c1)
	 // operator<<(std::cout, c1)

	return 0;
}