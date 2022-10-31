#include "main.h"

/**
 * _memset - fills the first n byte of the memory area
 *  @s: pointer to the memory area
 *  @b: constant byte
 *  @n: the byte of memory
 *
 *  Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
