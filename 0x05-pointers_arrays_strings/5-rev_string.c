#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer input value.
 */
void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char val;

	while (s[x] != '\0')
	{
		x++;
	}
	x = x -1;
	while (x > y)
	{
		val = s[y];
		s[y] = s[x];
		s[x] = val;
		x--;
		y++;
}
