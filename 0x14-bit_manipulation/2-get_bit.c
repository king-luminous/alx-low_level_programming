#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsingned long int input
 * @index: index of a bit
 *
 * Return: return value of a bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsingned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0, i <= 63; n >>= 1, i++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}

