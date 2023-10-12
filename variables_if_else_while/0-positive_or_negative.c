#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - exercise
 *
 * Description: random number
 *
 * Return: number
 */

int main(void)
	{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive.\n");
	}
	if (n < 0)
	{
		printf("is negative.\n");
	}
	if
	{
		printf("is zero.\n");
	}
	return (0);
	}
