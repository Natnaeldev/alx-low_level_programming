#include "main.h"
/**
 * *_strcpy - copies the string including the terminating nul
 * @*dest: pointer input value.
 * @*src: pointer input value.
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
