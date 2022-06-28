#include <iostream>

auto echange(int& a, int& b) {

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;

	int tamp(a);
	a = b;
	b = tamp;

	std::cout << " valeur de a :" << a << std::endl;
	std::cout << " valeur de b :" << b << std::endl;
} // dépile






auto main() -> int {
		
	int var(0);

	int* ptr;
	ptr = &var;
	ptr = nullptr; //0 

	int& ref = var; // initialisée , homogène à var
	ref = 5; // var=5
	

	auto i = 1;
	auto j = 2;

	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;

	echange(i, j);


	std::cout << " valeur de i :" << i << std::endl;
	std::cout << " valeur de j :" << j << std::endl;

	return 0;
}




























/*



*/