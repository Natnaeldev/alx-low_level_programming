#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = x + 1; y <= 56; y++)
		{
			for (z = y + 1; z <= 57; z++)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x != 55)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}

