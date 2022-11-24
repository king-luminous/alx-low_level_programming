#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			ttemp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
