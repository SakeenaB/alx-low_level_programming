#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints all possible combinations of two digits numbers
 *Return: Always 0 (Success)
 */

int main(void)

{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar((char)num2);
			putchar((char)num2);

			if (num1 != 56)

				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

