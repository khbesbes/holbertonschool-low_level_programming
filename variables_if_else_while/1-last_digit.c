#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main- print the last digit
 * return  = 0
 * */


int main(void)
{
	int  last_t , n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_t = n % 10;
	if (last_t > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n , last_t);
	}
	 else if  (last_t == 0)
	 {
		 printf("Last digit of %d is %d and is 0\n",  n , last_t);
	 }
	else if  (last_t < 6 && last_t !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n , last_t);
	}
	return (0);
}
