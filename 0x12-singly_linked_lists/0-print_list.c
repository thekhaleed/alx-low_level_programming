#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_lst - prints all elements of a list
 *
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes 
*/

size_t print_list(const list_t *h)
{
	size_t i =0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");			
		}
		else
		{
			prinf("[%d] (%s)\n", h->len, h->str);
		}
		i++
		h= h->next;
	}

	return (i);
}
