#include <ctype.h>
#include <stdio.h>
/**
 * main - print loweracase
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
