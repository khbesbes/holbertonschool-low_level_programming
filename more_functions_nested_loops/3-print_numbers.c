#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 * _putchar - writes the character c to stdout
 * Return: always 0 (success)
 */
void print_numbers(void)
{

	int n;

	for (n = 48; n <= 57 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
