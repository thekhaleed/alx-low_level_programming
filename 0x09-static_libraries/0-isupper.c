#include "main.h"

/**
 * _isupper - checks if upper case
 * @c: integer
 *
 * Return:0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
