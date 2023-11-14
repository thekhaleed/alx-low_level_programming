#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the place where it will be copied
 * @src: source of string
 * @n: int
 *
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
