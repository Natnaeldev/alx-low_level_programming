#include "main.h"
/**
 * _rev - prints a string in reverse followed by a new line.
 * @s: pointer input value.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	while (s[i] >= s[0])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
