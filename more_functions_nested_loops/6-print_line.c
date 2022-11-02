#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 *  Return = (0) ;
*/
void print_line(int n)
{
int i;

if (n <= 0)

    _putchar ('\n');

else if (n > 0)
    {    for ( i = 2 ; i <= n ; i++)
        
        _putchar('_');        
    }

    _putchar('\n');
}
