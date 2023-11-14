#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched for the substring
 * @needle: the substring
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*i)
	{
		j = needle;
		i = haystack;
		while (*j)
		{
			if (*i == *j)
			{
				j++;
				i++;
			}
			else
			{
				break;
			}
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
