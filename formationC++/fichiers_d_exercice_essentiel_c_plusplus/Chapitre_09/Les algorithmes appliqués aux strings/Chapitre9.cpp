#include<string>
#include <iostream>
#include <algorithm>

auto main() -> int {

	std::string str = "Fabien Brissonneau";
	std::string dest = "xxxxxxxxxxxxxxxxxx";

	auto ptr = std::find(begin(str), end(str), 'a');

	std::cout << *ptr << std::endl;

	auto cpt = std::count(begin(str), end(str), 'a');

	std::cout << cpt << std::endl;

	std::transform(begin(str), end(str), begin(dest), [](auto v) {return v + 1;});

	std::cout << dest;

	return 0;
}