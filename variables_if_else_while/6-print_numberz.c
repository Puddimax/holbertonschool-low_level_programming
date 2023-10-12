#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Base ten
 *
 * Return: zero for success
 */

int main(void)
	{
	for (char digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}
	putchar('\n');
	return (0);
	}
