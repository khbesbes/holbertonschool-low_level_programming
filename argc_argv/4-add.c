#include "main.h"
#include <stdlib.h>
/**
 * main -  add  number.
 * @argv: array of string
 * @argc: interger
 * Return: Alaways 0.
 */

int main(int argc, char *argv[])
{
int i, s;
s = 0;

if (argc > 0)
{
for (i = 1; argv[i] != NULL; ++i)
{
s += atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
