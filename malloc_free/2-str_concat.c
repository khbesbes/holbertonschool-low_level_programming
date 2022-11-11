#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatate two string.
 * @s1: pointer of string
 * @s2: pointer of string
 * Return: Alaways 0.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, n, j, p;
char *str;

if (s1  == 0)
s1 = "";
if (s2 == 0)
s2 = "";
str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
if (str == 0)
return (NULL);

for (i = 0; i < strlen(s1); i++)
{
*(str + i) = *(s1 + n);
n++;
}

for (j = i; j < (strlen(s1) + strlen(s2)); j++)
{
*(str + j) = *(s2 + p);
p++;
}
return (str);
}
