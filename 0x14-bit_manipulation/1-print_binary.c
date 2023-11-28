#include "main.h"

/**
 * print_binary - prints the binary value of a number
 * @n: number to be converted tobinary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
