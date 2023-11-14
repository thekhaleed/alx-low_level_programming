#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to be added onto a string
 * @s2: string that is added at end of s1
 *
 * Return:t
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		t[i] = s2[j];
		i++, j++;
	}
	t[i] = '\0';
	return (t);
}
