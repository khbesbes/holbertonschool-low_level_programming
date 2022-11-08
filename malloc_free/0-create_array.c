#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array for caracter .
 * @size: unsigned integer
 * @c: character
 * Return: Always NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
