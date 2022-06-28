#include <iostream>

auto echange(int a, int b) {

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;

	int tamp(a);
	a = b;
	b = tamp;

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;
} // dépile

auto main() -> int {

	auto i = 1;
	auto j = 2;

	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;

	echange(i, j);

	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;
	
	return 0;
}

