#include <iostream>
#include <vector>
#include <algorithm>


auto main() -> int {

	std::vector<int> v1 = { 4,5,6,7,5 };

	auto cpt = std::count(v1.begin(), v1.end(), 5);
	std::cout << " count = " << cpt << std::endl;

	auto cpt2 = std::count_if(v1.begin(), v1.end(), [](int v) {return v < 6;});
	std::cout << " count = " << cpt2 << std::endl;

	return 0;
}