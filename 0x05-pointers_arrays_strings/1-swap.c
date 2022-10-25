#include "main.h"

/**
 * swap_int - swapping the value of two integers
 * @a: int a
 * @b: int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
