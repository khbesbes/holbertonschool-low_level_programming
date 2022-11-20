#include "function_pointers.h"
/**
*  int_index - index to booleen
* @array: pointer to integer
* @size: integer
* @cmp:pointer to integer
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
