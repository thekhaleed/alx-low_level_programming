#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wordCount - counts number of words
 * @str: pointer tostring
 * @i: elements in string
 *
 * Return:wordcount
 */

int wordCount(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCount(str, i + 1));
	return (wordCount(str, i + 1));
}
/**
 * word_counter - counts number of words in 1d array
 * @str: pointer to string
 *
 * Return: word count
 */

int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCount(str, 0));
	return (wordCount(str, 0));
}

/**
 * strtow - split strings to words
 * @str: pointer to string
 *
 * Return: t
 */

char **strtow(char *str)
{
	char **t;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	t = malloc(sizeof(char *) * (words + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			t[i] = malloc(sizeof(char) * (n + 1));
			if (t[i] == NULL)
			{
				while (--i >= 0)
					free(t[--i]);
				free(t);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				t[i][m] = *str;
				m++, str++;
			}
			t[i][m] = '\0';
			i++;
		}
		str++;
	}
	t[i] = '\0';
	return (t);
}
