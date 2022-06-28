#include <iostream>
#include <vector>
#include <algorithm>
#include <list>


auto main() -> int {

	std::list<int> v1 = { 4,5,6,7,5 };

	std::for_each(begin(v1), end(v1), [](auto v) {std::cout << v << std::endl;});

	//std::sort(begin(v1), end(v1), std::greater<int>()); // <
	v1.sort();

	std::for_each(begin(v1), end(v1), [](auto v) {std::cout << v << std::endl;});

	return 0;
}