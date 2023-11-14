#include "main.h"
/**
 * _strlen_recursion - checks length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palind - checks if equal
 * @s: string
 * @i: integer
 * @j: integer
 *
 * Return:int
 */
int is_palind(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palind(s, i + 1, j - 1));
}

/**
 * is_palindrome- checks whether string is palindrome
 * @s: string to be checked
 *
 * Return:int
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palind(s, 0, len - 1));
}
