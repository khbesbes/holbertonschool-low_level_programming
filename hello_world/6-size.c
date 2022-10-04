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

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu byte\n", sizeof(charType);
	printf("size of long int: %zubyte\n",sizeof(intType));	
	printf("size of long long int : %zubyte\n"sizeof(longinitType));
	
    
	return (0);
}
