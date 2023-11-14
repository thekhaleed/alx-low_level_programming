#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
