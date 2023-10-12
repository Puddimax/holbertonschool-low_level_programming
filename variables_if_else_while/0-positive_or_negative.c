#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number and prints whether it's positive, negative, or zero.
 *
 * Return: zero for success
 */

int main(void)
	{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive.\n");
	if (n < 0)
		printf("is negative.\n");
	if (n == 0) printf("is zero.\n");
		printf("is zero.\n");
	return (0);
	}
