#include "function_pointers.h"
#include"stdlib.h"
/**
 * print_name - prints a name.
 * @name: pointer to charcter 
 * @f: pointer to function 
 * Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
if (name == 0 || f == 0)
return;
f(name);
}
