#include <stdio.h>
/**
 * main - ptint lower and the upper letter
 * Return: 0
 */
int main(void)
{
	char a = 'A';
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar	('\n');
	return (0);
}
