#include <string>
#include <complex>
#include <Windows.h>

template <typename T>
class Pile {

};

typedef Pile< std::complex<int> >  PC;

using PS = Pile<std::string>;

using mystring =  std::basic_string<char>;

auto main() -> int {
	
	Pile<int> pi;

	Pile<double> pd;

	//pi = pd;

	PS ps;

	PC pc;

	std::basic_string<char> nom = "Fabien";
	std::basic_string<wchar_t> nom2 = L"你好";

	MessageBoxW(0, nom2.c_str(), nom2.c_str(), 0);

	return 0;
}