#include "main.h"
/**
 * print_last_digit - Print the sign of a number.
 *
 * @l: The number to be checked.
 *
 * Return: 1 prints +, 0 prints zero, -1 prints -.
 */

int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (last_digit < 0)

		last_digit *= -1;
		_putchar(last_digit + '0'):
		return (last_digit);
}
