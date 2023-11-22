#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of a single linked list
 * @head: current position in the list
 * @n: value to be assigned to the new node
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
