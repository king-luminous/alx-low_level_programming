#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: the array
 * @size: size of the array
 * @cmp: the value comparator between pointer and function
 *
 * Return: no element matches size <= 0 - -1.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
