#include "swap.hpp"

int strlen_(const char* str) {
	int counter = 0;

	for(const char* p = str ; *p != '\0'; p++) {
		counter ++;
	}
	return counter;

}
