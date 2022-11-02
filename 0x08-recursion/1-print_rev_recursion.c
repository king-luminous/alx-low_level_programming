#include "main.h"

/**
 * _print_rev_recursion - this will reverse the string
 * @s: reverted string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
