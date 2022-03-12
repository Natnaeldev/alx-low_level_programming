#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char N;
for (N = 'a'; N <= 'z'; N++)
{
putchar(N);
}
for (N = 'A'; N <= 'Z'; N++)
{
putchar(N);
}
putchar('\n');
return (0);
}
