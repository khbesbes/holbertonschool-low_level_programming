#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: pointer to list
 *@str: list_t
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new =  malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
{
free(new);
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
