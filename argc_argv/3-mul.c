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
int i, x, s ;
if ( argc < 3)
{
 printf("0\n");
}
else
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)

{
if (argv[i][j] > '9' || argv [i][j] < '0')
{
printf ("Error\n");
return (0);
}
x += atoi(argv[i]);
}
printf("%d\n",x)

}
return (0);
}
