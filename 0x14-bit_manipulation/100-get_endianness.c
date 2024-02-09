#include "main.h"
#include <stddef.h>

/**
 * get_endianness - a function that checks the endianness
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
		return ((int)*c);
}
