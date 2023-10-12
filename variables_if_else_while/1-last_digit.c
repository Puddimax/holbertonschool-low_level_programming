#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Last digit
 *
 * Return: zero for success
 */

int main(void)
	{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is", n,"and is greater than 5")
	if (n % 10 == 0)
		printf("Last digit of %d is", n,"and is 0"
	if (n % 10 < 6)&&(n % 10 != 0)
		printf("The last digit of %d is", n,"and is less than 6 and not 0")
	return (0);
	}
