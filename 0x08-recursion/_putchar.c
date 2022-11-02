#include "main.h"
#include <unistd.h>

/**
 * _putchar - orints the character c to stdout
 * @c: charactrr to be printed
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

