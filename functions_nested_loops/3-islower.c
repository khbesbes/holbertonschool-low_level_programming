#include "main.h"
/**
*_islower - Write a function that checks for lowercase character
* @c: input value
* Return: always 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}

