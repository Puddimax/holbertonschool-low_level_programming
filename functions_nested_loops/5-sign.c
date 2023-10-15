#include "main.h"
/**
 * print_sign - Print the sign of a number.
 *
 * @n: The character to be checked.
 *
 * Return: 1 prints +, 0 prints zero, -1 prints -.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
