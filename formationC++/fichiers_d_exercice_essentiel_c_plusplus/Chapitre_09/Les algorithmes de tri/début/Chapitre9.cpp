#include <iostream>
#include <vector>
#include <algorithm>


auto main() -> int {

	std::vector<int> v1 = { 4,5,6,7,5 };

	std::for_each(begin(v1), end(v1), [](auto v) {std::cout << v << std::endl;});



	return 0;
}