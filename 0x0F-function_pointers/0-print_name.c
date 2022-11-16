#include "function_pointer.h"

/**
 * print_name - prints name
 * @name: printed name
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
