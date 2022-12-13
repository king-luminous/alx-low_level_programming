#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc, e, q;

	e = 'e';
	q = 'q';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != e && lc != q)
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
