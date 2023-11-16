#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: pointer to head
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
