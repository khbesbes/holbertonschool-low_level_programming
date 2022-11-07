#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main  - multipule all operation
 *@argv: array of string
 *@argc: interger
 * Return: 1(Sucess) or 0.
 */
int main(int argc, char *argv[])
{
int i, x = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else

for (i = 1; i < argc; i++)
{
x *= atoi(argv[i]);
}
printf("%d\n", x);
return (0);
}
