
#include <cstring>

template<typename T>
T mini(T a, T b) {
	return (a < b) ? a : b;
}

template<>
const char* mini(const char* a, const char* b) {
	return (strcmp(a,b)<0) ? a : b;
}

auto main() -> int {
	
	int mi = mini(3, 4);
	double md = mini(4.5, 5.6);

	auto ms = mini("Fabien", "Xavier");

	return 0;
}