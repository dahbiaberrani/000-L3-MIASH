#include <iostream>
#include <vector>

auto main() -> int {


	std::vector<int> vi;

	vi.push_back(42);


	for (int i = 0; i < vi.size(); i++) {
		std::cout << vi[i] << std::endl;
	}

	std::vector<int>::iterator it = vi.begin();

	while (it != vi.end()) {
		std::cout << *it << std::endl;
		++it;
	}

	for (auto v : vi) {
		std::cout << v << std::endl;
	}

	return 0;
}