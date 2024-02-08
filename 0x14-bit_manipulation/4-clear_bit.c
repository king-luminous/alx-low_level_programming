#include "main.h"
#include <stddef.h>

/**
 * clear_bit - fuction that set the value of a bit to 0
 * @n: unsigned long int
 * @index: the digit we want to set
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

