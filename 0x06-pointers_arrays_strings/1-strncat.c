#include <main.h>

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy input to
 * @src: copy input from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
