#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: AlphabetL
 *
 * Return: zero for success
 */

int main(void)
	{
	char letterL = 'a';

	while (letterL <= 'z')
	{
	if (letterL != 'q' && letterL != 'e')
	{
	putchar(letterL);
	}
	letterL++;
	}
	putchar('\n');
	return (0);
	}
