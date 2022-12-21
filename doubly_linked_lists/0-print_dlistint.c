#include "lists.h"
#include "stdio.h"
/**
 * print_dlidtint - prints integers 
 * @h: pointer to integer
 * Return: data sturct.
 */
 size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *c;

	c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		i++;
	}
	return (i);
}

