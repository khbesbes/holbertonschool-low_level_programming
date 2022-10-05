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
	if (last_t < 5) 
	{
	printf("Last digit of %d is %d and is greater than 5",  last_t, n);	
	}	
	 else if  (last_t == 0)
	 {
		 printf("Last digit of %d is %d and is 0",  last_t, n);
	 }	
	else if  (last_t > 6 && last_t !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 ", last_t , n);
	}	
	return (0);
}
