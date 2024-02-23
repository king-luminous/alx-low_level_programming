#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int zx;

	zx = (n % 10);

	if (zx < 0)
	{
		zx = (-1 * zx);
	}
	_putchar(zx + '0');

	return (zx);
}
