#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers.
 * Return: Always 0.
 */
void more_numbers(void)
{
	char j;
	char i;
	char y;
	char x;

	for (j = 0 ; j <= 9 ; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
				y = i;

			else

			{
				x = i / 10;
				y = i % 10;

				_putchar(x + '0');
			}
			_putchar(y + '0');
		}

		_putchar('\n');
	}
}
