#include "main.h"
/**
 * puts_half - prints half of the string followed by a new line
 * @str: pointer input value.
 */
void puts_half(char *str)
{
	int x = 0;
	int n;

	while (str[x] != '\0')
	{
		x++;
	}
	n = x / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n')i;
}
