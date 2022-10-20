#include "main.h"

/**
 * print_line - Draws a straight line in terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int a;

		if (a <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (a = 0; a <= n; a++)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
}
