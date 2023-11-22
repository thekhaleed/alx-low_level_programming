#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees listint list and sets head to NULL
 * @head: current position of node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
