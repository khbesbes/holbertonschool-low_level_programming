#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copy a string .
 * @str:  pointer of string.
 * Return: string
 */
char *_strdup(char *str)
{
char *string = 0;
int i = 0, j = 0, len = 0;

if (str == 0)
return (NULL);
len = strlen (str);

string = malloc(len + 1 * sizeof(char));
if (string == 0)
return (NULL);
while (i <= len)
{

*(string + j) = *(str + i);
i++;
j++;

}
return (string);
}
