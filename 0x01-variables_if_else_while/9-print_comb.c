#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int N;
for (N = 48; N <= 57; N++)
{
putchar(N);
if (N != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
