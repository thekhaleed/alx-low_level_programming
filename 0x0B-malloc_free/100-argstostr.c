#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates arguments
 * @ac: size of argument
 * @av: pointer to arguments
 *
 * Return:t
 */

char *argstostr(int ac, char **av)
{
	char *t;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			t[k++] = av[i][j];
		}
		t[k++] = '\n';
	}
	t[k] = '\0';
	return (t);
}
