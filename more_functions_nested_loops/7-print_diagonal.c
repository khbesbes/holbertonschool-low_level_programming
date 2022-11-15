#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 * Return: 0
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ' + '0');
}
_putchar('\\');
_putchar('\n');
}
}
}
