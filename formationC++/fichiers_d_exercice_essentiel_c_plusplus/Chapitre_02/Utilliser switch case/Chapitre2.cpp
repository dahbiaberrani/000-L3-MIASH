#include <iostream>
#include <string>

auto fonction(int lang) -> std::string {
	auto retval = "Hello";
/*
	if (lang == "fr") { 
		retval= "Salut"; 
	}
	else if (lang == "de") {
		retval = "Hallo";
	}
	else {
		retval = "Hello";
	}
	*/

	switch (lang) {
	case 0 : 
		retval = "Salut";
		break;
	case 1: 
	case 2:
		retval = "Hallo";
		break;
	default :
		retval = "Hello";
	}

	return retval;
}

auto main() -> int {

	std::cout<< fonction(0);

	return 0;
}