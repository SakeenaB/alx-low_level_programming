#include "main.h"

/**
 * more_numbers - Prints 1 to 14, ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('0' + 1);
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
