#include "nain.h"

/**
 * square_root - find the natural square root
 * @i: number
 * @j: increment
 *
 * Return: the number
 */
int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}
/**
 * _sqrt_recursion - return the natural square root of the number
 * @n: number
 * Return: the natural number
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}
