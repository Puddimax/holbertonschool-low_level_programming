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
	int i;

	for (i = '0'; i >= '0' && i <= '9'; i++)
	{
	putchar(i + '0');
	putchar(", ");
	}
	return (0);
	}