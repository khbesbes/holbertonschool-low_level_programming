#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int j, i, d;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 1; i <= 9; i++)
		{
			d = (j * i);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
