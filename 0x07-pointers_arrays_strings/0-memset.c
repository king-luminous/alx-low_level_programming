#include "main.h"

/**
 * -memset - fills the first n byte of the memory area
 *  @s: a pointer to the memory area
 *  @c: the character to fill the memory area
 *  @n: the number of byte ro b filled
 *
 *  Return: A pointer to the filled memory area
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	retuen (memory);
}
