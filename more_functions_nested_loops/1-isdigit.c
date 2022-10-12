#include "main.h"
/**
 * isdigit - Write a function that checks for a digit  (0 through 9)
 * @c: input value
 * Return: always 0
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c < 58)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);



}
