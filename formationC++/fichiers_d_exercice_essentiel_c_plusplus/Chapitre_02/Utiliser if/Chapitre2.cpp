#include <iostream>
#include <string>

auto fonction(std::string lang) -> std::string {
	auto retval = "Hello";

	if (lang == "fr") { 
		retval= "Salut"; 
	}
	else if (lang == "de") {
		retval = "Hallo";
	}
	else {
		retval = "Hello";
	}

	return retval;
}

auto main() -> int {

	std::cout<< fonction("fr");

	return 0;
}