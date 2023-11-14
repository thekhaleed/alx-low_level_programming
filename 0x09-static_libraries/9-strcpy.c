#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: car
 * @src: char
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int z = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (; z < l; z++)
	{
		dest[z] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
