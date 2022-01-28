#include "strcpy.hpp"
#include <cstddef>
#include <iostream>


size_t strlen_(const char* str) {
	size_t counter = 0;

	for(const char* p = str ; *p != '\0'; p++) {
		counter ++;
	}
	return counter;

}

void strcpy_(char* destination, const char* source){

	while (*source != '\0') {
		*destination++ = *source++;
	}
}

char* strncpy_(char *destination, const char *source,size_t num) {
	if (strlen_(source) >= num) {
		while (*source != '\0') {
			*destination++ = *source++;
		}
	
	} 
	
	if (strlen_(source) < num) {
		while (*source != '\0') {
			*destination++ = *source++;
		}
		int count = num - (strlen_(source));
		for (size_t i = 0; i < count; i++){
			*destination++ = '0';
		}	
	}
	return destination;
}

