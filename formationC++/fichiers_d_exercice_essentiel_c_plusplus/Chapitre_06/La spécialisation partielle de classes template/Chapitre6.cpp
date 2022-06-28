#include <iostream>
#include <vector>
#include <cstring>

template<typename T>
class Pile {
	std::vector<T> data;
	int index;

public:

	void push(T valeur) {
		data.push_back(valeur);
		index++;
	}

	T min() {
		T min = data[0];
		for (auto v : data) {
			if (v < min) min = v;
		}
		return min;
	}
};

template<>
const char* Pile<const char*>::min() {
	const char* min = "zzzzzzzzzzzzzzzzzzzzzzzzzzz";
	for (auto v : data) {
		if (strcmp(v,min)<0) min = v;
	}
	return min;
}


auto main() -> int {


	Pile<int> pi;
	pi.push(42);
	pi.push(3);
	pi.push(4);

	std::cout << pi.min() << std::endl;

	
	Pile<const char*> ps;
	ps.push("Xavier");
	ps.push("Fabien");
	ps.push("Alouette");

	std::cout << ps.min() << std::endl;

	return 0;
}