#include "main.h"

/**
 * factorial - prints out factorial of a value
 * @n : integer
 *
 * Return:factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
