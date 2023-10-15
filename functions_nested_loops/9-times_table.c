#include "main.h"
/**
 * times_table - Print the sign of a number.
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
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;

			if (mult > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (prod <= 9)
				{
					_putchar(' ');
				}
			}

			if (prod <= 9)
			{
				_putchar('0' + prod);
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
