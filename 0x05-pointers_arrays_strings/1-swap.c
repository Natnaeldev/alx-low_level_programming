#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer input value.
 * @b: pointer input value.
 */
void swap_int(int *a, int *b)
{
	int Z;

	Z = *a;
	*a = *b;
	*b = Z;
}
