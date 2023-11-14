#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: string to search
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
			i++;
		}
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
