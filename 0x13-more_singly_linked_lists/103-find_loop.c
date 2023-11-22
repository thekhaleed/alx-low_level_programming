#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}
			return (node1);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}
	return (NULL);
}
