#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_alphabet_x10 - exercise
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

int main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet();
	}
	return 0;
}
