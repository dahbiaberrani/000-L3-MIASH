#include <iostream>
#include <vector>
#include <algorithm>

auto main() -> int {

	std::vector<int> vi{ 4,5,6,7,8 };
	
	std::for_each(begin(vi), end(vi), [](int v) { std::cout << v << std::endl;});

	auto ptr = std::remove_if(begin(vi), end(vi), [](int v) { return v < 6;});

	std::cout << " ******** " << std::endl;
	std::for_each(begin(vi), end(vi), [](int v) { std::cout << v << std::endl;});

	vi.erase(ptr, vi.end());

	std::cout << " ******** " << std::endl;
	std::for_each(begin(vi), end(vi), [](int v) { std::cout << v << std::endl;});

	return 0;
}