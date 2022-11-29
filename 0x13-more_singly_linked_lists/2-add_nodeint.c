#include "lists.h"

/**
 * add_nodeint - add a new node at the beggining of a listint_t list
 * @head: a pointer to the address of the head of the listint_t list
 * @n: the integer for the new node to contain
 * Return: if the function fails - NULL.
 *		otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
