
#include "swap.h"

auto swap(int a, int b)  -> void {
	auto tmp{ a };
	a = b;
	b = tmp;
}