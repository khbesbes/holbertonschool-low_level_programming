#include "main.h"
#include "stdio.h"
/**
 * main - prints all arguments it receives.
 * @argv: array of string
 * @argc: integer.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)

{

printf("%s\n", argv[i]);

}

return  (0);
}
