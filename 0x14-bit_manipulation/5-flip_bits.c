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
	unsigned long int flipped = n ^ m;
	int move = 0;

	while (flipped)
	{
		if (flipped & 1)
			move++;
		flipped >>= 1;
	}
	return (move);
}
