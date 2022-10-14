#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints numbers of base 16 in lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
