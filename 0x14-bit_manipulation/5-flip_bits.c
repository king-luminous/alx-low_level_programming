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
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
