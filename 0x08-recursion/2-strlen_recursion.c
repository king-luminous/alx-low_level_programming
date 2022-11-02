#include "main.h"

/**
 * _strlen_recursion - this prints the length of a string
 * @s: pointer input
 *
 * Return: returns the value of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
