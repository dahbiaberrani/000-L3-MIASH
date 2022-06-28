#include <iostream>
#include <vector>
#include <limits>

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

auto main() -> int {


	Pile<int> pi;
	pi.push(42);
	pi.push(3);
	pi.push(4);

	std::cout << pi.min() << std::endl;

	return 0;
}