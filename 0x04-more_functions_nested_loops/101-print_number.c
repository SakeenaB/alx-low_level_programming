#include "main.h"

/**
 *print_number - Prints an integer
 * @n: integer
 * Return: Always 0 (success)
 */

void print_number(int n)
{
	long m;
	int c;
	long a;

	a = n;

	if (a < 0)
	{
		a *= -1;
		_putchar('-');
	}
	m = 1;
	c = 1;

	while (c)
	{
		if (a / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}
	while (a >= 0)
	{
		if (m == 1)
		{
			_putchar(a % 10 + '0');
			a = -1;
		}
		else
		{
			_putchar((a / m % 10) + '0');
			m /= 10;
		}
	}
}
