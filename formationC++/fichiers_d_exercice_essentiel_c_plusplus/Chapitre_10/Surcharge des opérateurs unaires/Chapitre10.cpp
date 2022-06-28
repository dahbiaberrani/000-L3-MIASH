
class Complexe {

	int reel;
	int img;

	// friend Complexe& operator++(Complexe& obj);

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
auto main() -> int {

	Complexe c1{ 4,5 };

	++c1;
	
	return 0;
}