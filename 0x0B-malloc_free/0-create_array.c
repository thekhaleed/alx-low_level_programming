#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the char
 * @c: char
 *
 * Return: t
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
