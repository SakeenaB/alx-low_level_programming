#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

