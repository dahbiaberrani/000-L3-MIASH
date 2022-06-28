#include <iostream>
#include <iomanip>


auto main() -> int {

	std::cout << std::hex << 42 << std::endl;

	double valeur = 1.021212;

	std::cout << std::setprecision(7)<< valeur << std::endl;

	long v1 = 100045L;
	long v2 = 123;

	std::cout << std::dec << std::setfill('.')
		<< std::setw(10) << v1 << "\n"
		<< "+" << std::setw(9) << v2 << "\n"
		<< std::endl;
	return 0;
}