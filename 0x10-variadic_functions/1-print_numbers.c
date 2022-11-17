#include "variadic_functions.h"

/**
 * print_numbers - prints all the parameter
 * @n: number of arg passed
 * @seperators: string between numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (seperator != NULL)
					printf("%d%s", va_arg(params, int), seperator);
				else
					printf("%d%s", va_arg(params, int));
			}
			else
			{
				printf("%d", va_arg(params, int));
			}
		}
	}
	printf("\n");
	va_end(params);
}
