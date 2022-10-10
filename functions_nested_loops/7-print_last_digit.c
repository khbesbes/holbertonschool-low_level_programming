#include "main.h"
/**
 *  print_last_digit: prints the last digit of a number
 */
int print_last_digit(int c)
{
   int num;

   num = c % 10;

   if (c < 0)
 	   num *= -1;
   _putchar(num + '0');
   return (num);
}	
