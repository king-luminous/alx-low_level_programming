#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory to a pointer
 * @b: size of memory
 *
 * Return: return to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);
}
