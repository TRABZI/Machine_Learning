#include <iostream>
#include <stdlib.h>
#include "swap_function.h"

void swap_function(int &a, int &b)
{
	auto tmp =b;
	b=a;
	a=tmp;
}