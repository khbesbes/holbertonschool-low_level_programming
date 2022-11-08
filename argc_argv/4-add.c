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
int i, j, x = 0;

if (argc < 1)
{
printf("0\n");
return (0);
}

else
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)

{
if (argv[i][j] < 'z' || argv[i][j] > 'a')
{
printf("Error\n");
return (1);
}
x += atoi(argv[i]);
}
}
printf("%d\n", x);

return (0);
}
