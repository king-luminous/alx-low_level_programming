#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer at the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = o, haystack[i] != '\0')
	{
		for (j = 0, needle[j] != '\0')
		{
			if (need[i] != haystack[i + j])
			{
				break;
			}
		}
	if (need[j] == '\0')
	{
		return (&haystack[i]);
	}
	i++;
	}
	return ('\0');
}

