#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of a listint_t list
 * @h: a pointer to the head of then list_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
