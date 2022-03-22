#include "main.h"
/**
 * _puts - prints the array string followed by a new line.
 * @str: pointer input value.
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
