#include <iostream>
#include <vector>
#include <algorithm>



auto main() -> int {

	std::vector<int> v1 = { 4,5,6,7,5 };

	auto ptr = std::find(begin(v1), end(v1), 6);

	std::cout << *ptr << std::endl;

	auto ptr2 = std::find_if(begin(v1), end(v1), [](auto v) {return v > 4;});

	std::cout << *ptr2 << std::endl;

	std::sort(begin(v1), end(v1));

	auto existe = std::binary_search(begin(v1), end(v1), 7);

	std::cout << std::boolalpha << existe;

	return 0;
}