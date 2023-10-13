#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Reverse
 *
 * Return: zero for success
 */

int main(void)
	{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
	}
