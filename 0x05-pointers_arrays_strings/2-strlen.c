#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer input value.
 * Return: The Array length.
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
