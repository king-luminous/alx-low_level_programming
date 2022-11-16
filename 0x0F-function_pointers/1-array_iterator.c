#include "function_pointers.h"

/**
 * array_iterator - execute a function of array
 * @size: the size of array
 * @action: function to be executed with a pointer
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
