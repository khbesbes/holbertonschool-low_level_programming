#include<stdio.h>
/**
 * main - sizeof evaluates the size of a variable
 * Return: 0
 */
int main(void)
{
	int intType;
	long int intType;
	long long int longlongintype;
	char charType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of longint: %zu bytes\n", sizeof(longintType));
	printf("Size of int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of char: %zubytes\n", sizeof(charType));
	printf("Size of float: %zu byte\n", sizeof(floatType));

	return (0);
}
