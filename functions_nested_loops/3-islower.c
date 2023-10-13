#include "main.h"
/**
 * _islower - exercise
 *
 * @c: the caracter is normal
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
