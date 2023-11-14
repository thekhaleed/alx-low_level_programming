#include "main.h"

/**
 * _puts_recursion - prints out the string
 * @s: string to be ouputted
 *
 * Return:void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
