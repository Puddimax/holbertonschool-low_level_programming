#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * int _islower - exercise
 *
 * Description: Functions alphabet
 *
 * Return: 1 for lowercase, 0 for other
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
