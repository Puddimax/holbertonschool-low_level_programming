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

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++) 
		{
		putchar(b);
		}
	putchar('\n');
	}
}
