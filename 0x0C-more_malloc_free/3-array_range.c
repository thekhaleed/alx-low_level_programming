#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an integer of arrays
 * @min: minimum array
 * @max: maximum array
 *
 * Return: t
 */
int *array_range(int min, int max)
{
	int i, j;
	int *t;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	t = malloc(j * sizeof(*t));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < j && min <= max; i++, min++)
		*(t + i) = min;
	return (t);
}
