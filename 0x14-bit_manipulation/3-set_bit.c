#include "main.h"
#include <stddef.h>

/**
 * set_bit - fuction that sets the value of a bit to 1
 * @n: unsigned long int
 * @index: index to set
 * Return: 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
