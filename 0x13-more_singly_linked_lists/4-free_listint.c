#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the listint_t list
 * @head: current node/ place
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
