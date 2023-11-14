#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print out
 *
 * Return: 1 on success
 * On error, -1 is returned, errno set approprately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
