#include <stdio.h>
/**
*main-Entry point
*Return: Always 0 (Success)
*/
intmain(void)
{
char N;
for (N = 'a' ; N <= 'z' ; N++)
{
if (N == 'e' || N == 'q')
{
continue;
}
putchar(N);
}
putchar('\n');
return (0);
}
