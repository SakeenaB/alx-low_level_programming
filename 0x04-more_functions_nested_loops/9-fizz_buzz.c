#include <stdio.h>

/**
 * main - Entry point
 * Description: print Fizz for multiples of 3
 * and Buzz for multiples of 5
 * and FizzBuzz for multiples of both
 * Return: Always o (Success)
 */

int main(void)
{
	int s;

	s = 1;
	printf("%d", s);
	for (s = 2; s <= 100; s++)
	{
		printf(" ");
		if (s % 3 == 0 || s % 5 == 0)
		{
			if (s % 3 == 0)
				printf("Fizz");
			if (s % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", s);
		}
	}
	printf("\n");
	return (0);
}
