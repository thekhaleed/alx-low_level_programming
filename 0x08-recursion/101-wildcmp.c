#include "main.h"

/**
 * substring_match- compares two strings
 * @s1: string to be compared
 * @s2: string that contains *
 * @b: char
 *
 * Return:0
 */
int substring_match(char *s1, char *s2, char *b)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, b));
	else
		return (substring_match(s1 + 1, b, b));
}

/**
* wildcmp - compares two strings
* @s1: string to be compared
* @s2: contains *
*
* Return: 0;
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
