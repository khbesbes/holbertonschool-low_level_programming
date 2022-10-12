#include "main.h"
/**
 * _isupper - Write a function that checks uppercase character
 * @c: input value
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
