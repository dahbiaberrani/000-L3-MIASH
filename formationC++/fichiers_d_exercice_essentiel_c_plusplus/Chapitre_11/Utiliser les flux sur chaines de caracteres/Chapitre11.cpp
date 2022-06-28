#include <iostream>
#include <sstream>

#include <string>

auto main() -> int {

	std::ostringstream ss;

	ss << " data " << 42;

	std::string s = ss.str();

	ss.str("");

	std::istringstream ssi;

	ssi >> s;

	return 0;
}