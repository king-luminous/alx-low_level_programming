#include "main.h"
#include <stddef.h>

/**
 * flip_bits - function returning number needed to flip number int another
 * @n: initial digit
 * @m: final digit
 * Return: the number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result = 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
