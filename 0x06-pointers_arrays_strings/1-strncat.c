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
	int a;
	int b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
