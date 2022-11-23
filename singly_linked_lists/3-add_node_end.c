#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t
 * @str: pointer to string
 * Return: add new node at begining
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
{
free(new);
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
return (new);
}
