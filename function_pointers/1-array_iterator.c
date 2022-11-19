#include "function_pointers.h"
/**
 * array_iterator - exctuce a function as paramater given
 * @array: pointer to integer
 * @size: integer
 * @action: pointer to function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
return;
if (action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
