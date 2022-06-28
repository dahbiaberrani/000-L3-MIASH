#include <iostream>

auto echange(int* a, int* b) {

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;

	int tamp(*a);
	*a = *b;
	*b = tamp;

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;
} // d�pile






auto main() -> int {

	int var(0);

	int* addr = &var;

	*addr = 5; // var=5
	
	auto i = 1;
	auto j = 2;

	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;

	echange(&i, 0); // ???

	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;

	return 0;
}
