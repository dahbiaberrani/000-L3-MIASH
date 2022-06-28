#pragma once
#include <string>
#include <sstream>

class PileException {
	std::string message;
public:
	PileException(std::string msg) : message(msg) {}

	virtual std::string print() {
		return message;
	}
};

class PushOnFullException : public PileException{
	
	int taille;
	int index;

public:
	PushOnFullException(std::string msg, int taille, int index) : PileException(msg), taille(taille), index(index) {}

	std::string print() override {
		std::ostringstream ss;
		ss << PileException::print() << " taille : " << taille << " index : " << index;
		return ss.str();
	}
};