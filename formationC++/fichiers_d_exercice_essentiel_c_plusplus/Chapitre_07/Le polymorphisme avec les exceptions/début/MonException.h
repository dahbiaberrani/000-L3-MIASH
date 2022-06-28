#pragma once
#include <string>
#include <sstream>

class MonException {
	std::string message;
	int taille;
	int index;

public:
	MonException(std::string msg, int taille, int index) : message(msg), taille(taille), index(index) {}

	std::string print() {
		std::ostringstream ss;
		ss << message << " taille : " << taille << " index : " << index;
		return ss.str();
	}
};