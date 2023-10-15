#include "main.h"
/**
 * timeS_table - Print the sign of a number.
 *
 * Null: The number to be checked.
 *
 * Return: 1 prints +, 0 prints zero, -1 prints -.
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
	for (mult = 1; mult <= 9; mult++)
	{
		_putchar(',');
		_putchar(' ');
		prod = num * mult;
	if (prod <= 9)
		_putchar(' ');
	else
		_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
	}
		_putchar('\n');
	}
}
