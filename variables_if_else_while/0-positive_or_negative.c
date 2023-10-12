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
	if (n > 0) {
	printf("The generated integer is positive.\n");
} 	else if (n < 0) {
	printf("The generated integer is negative.\n");
}	else {
	printf("The generated integer is zero.\n");
}
	return (0);
}
