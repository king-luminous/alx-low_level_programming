#include "main.h"

/**
 * _strlen - returns the length of a stting
 * @s: string
 * Return: lengths
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len)
}
