#include "main.h"

/**
 * _strchr - locates a character
 * @s: the memory
 * @c: constant byte
 *
 * Return: a pointer in the found character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
