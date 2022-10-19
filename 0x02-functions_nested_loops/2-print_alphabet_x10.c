#include "main.h"

/**
 *print_alphabet_x10 - print alphabets 10 times in lowercase
 *Description: print alphabets 10 times in lowercase
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
