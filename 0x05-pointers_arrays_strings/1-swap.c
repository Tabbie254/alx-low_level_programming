#include "main.h"
/**
 * swap_int - swaps value
 * @a: param
 * @b: param 2
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
