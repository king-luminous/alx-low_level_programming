#include "main.h"
/**
 * factorial - finds the factorisl if a given numer
 * @n: an argument to be passed to function
 *
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

