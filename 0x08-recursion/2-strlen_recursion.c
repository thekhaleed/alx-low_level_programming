#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: string to be scanned
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
