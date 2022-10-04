#include<stdio.h>
/**
 * main - the progarm that prints the size of various types
 * return : 0
 */
int main(void)
{
	int intType;
	float floatType;
	long int intType;
	long long int longType;
	char charType;

	printf("Size of int: %d bytes\n", sizeof(intType));
	printf("Size of float: %d bytes\n", sizeof(floatType));
	printf("Size of char: %d byte\n", sizeof(charType));
	printf("size of long int: %d byte\n", sizeof(intType));
	printf("size of long long int : %dbyte\n", sizeof(longinitType));


	return (0);
}
