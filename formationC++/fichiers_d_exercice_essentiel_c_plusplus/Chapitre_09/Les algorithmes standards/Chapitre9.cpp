#include <iostream>

#include <vector>

#include <algorithm>

auto main() -> int {

	std::vector<int> v1 = { 5,4,6,7,8 };
	std::vector<int> v2;

	v2.resize(v1.size());

	std::copy(v1.begin(), v1.end(), v2.begin());

	std::for_each(v2.begin(), v2.end(), [](int v) {std::cout << v << std::endl;});
	

	return 0;
}