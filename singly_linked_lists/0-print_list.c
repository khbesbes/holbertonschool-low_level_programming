#include "lists.h"
/**
* print_list - print number of element
* @h: list_t list
* Return: number of the node
*/
size_t print_list(const list_t *h)
{
const list_t *new_node = h;
int i = 0;
while (new_node != NULL)
{
if (new_node->str != NULL)
printf("[%d] %s\n", new_node->len, new_node->str);
if (new_node->str == NULL)
printf("[0] (nil)\n");
new_node = new_node->next;
i++;
}
return (i);
}
