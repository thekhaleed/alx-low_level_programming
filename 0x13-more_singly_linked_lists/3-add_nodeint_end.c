#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: current position
 * @n: value to be pu in the new node
 *
 * Return:address of new node elese NULL in case of failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}

