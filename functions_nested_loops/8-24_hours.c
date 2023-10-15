#include "main.h"
/**
 * jack_bauer - Print the sign of a number.
 *
 * void: The number to be checked.
 *
 * Return: 1 prints +, 0 prints zero, -1 prints -.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
	for (minute = 0; minute <= 59; minute++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	}
	}
}
