#include "main.h"

/**
 * print_line - Draws a straight line in terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int a;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (a = 1; a <= n; a++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
}
