#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_alphabet - exercise
 *
 * Description: Functions alphabet
 *
 * Return: zero for success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
