#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t
 * Return: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
const list_t *new_node = h;
int n = 0;
while (new_node != NULL)
{
n++;
new_node = new_node->next;
}
return (n);
}
