#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer input value.
 * @n: input value
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf(a[x]);
		if (a[x] != a[n - 1])
		{
		printf(',');
		printf(' ');
		}
		x++;
	}
	printf('\n');
}
