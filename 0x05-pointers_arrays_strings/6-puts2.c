#include "main.h"
/**
 * puts2 - prints every other charcter of a string.
 * @str: pointer input value.
 */
void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
