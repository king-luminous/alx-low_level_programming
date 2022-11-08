#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to be printed to stdout
 * @c: the character to be printed
 *
 * Return: on success 1
 */
_int _putchar(char c)
{
	return(write(1, &c, 1));
}
