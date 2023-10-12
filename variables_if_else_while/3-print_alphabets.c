#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Alphabet
 *
 * Return: zero for success
 */

int main(void)
	{
	char letterL = 'a';
	char letterU = 'A';

	while (letterL <= 'z')
	{
	putchar(letterL);
	letterL++;
	}
	while (letterU <= 'Z')
	{
	putchar(letterU);
	letterU++;
	}
	putchar('\n');
	return (0);
	}
