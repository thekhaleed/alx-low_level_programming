#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: the bit
 * @index: position to be checked
 *
 * Return: value of bit at the given index else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
