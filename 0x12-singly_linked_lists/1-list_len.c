#include "lists.h"

/**
 * list_len - finds length of number of elements in a linked list
 * @h: the linked list to list_t
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
