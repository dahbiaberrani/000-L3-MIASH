#include "swap.h"

auto swap(int a, int b) -> void{
    int tmp = a;
    a = b;
    b = tmp;
}