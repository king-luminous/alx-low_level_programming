#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * start_up_func - function that gets executed before the main function
 *
 * Return: void
 */
void first(void)
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
