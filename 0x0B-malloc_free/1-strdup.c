#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - puts pointer in copied string
 * @str: string that has been copied
 *
 * Return: t
 */

char *_strdup(char *str)
{
	char *t;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	t = malloc(sizeof(*str) * i);
	if (t == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		t[j] = str[j];
		j++;
	}
	return (t);
}
