#include <iostream>

auto main() -> int {

	auto i(0);

	do {

		std::cout << " i = " << i << std::endl;

		i++;

		if (i > 10) break;
	} while (true);

	return 0;
}