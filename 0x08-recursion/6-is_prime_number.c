#include "main.h"

/**
 * square_root - finds square root of a number
 * @n: int
 * @m:int
 *
 * Return:squareroot
 */
int square_root(int n, int m)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n * n == m)
		return (n);
	return (square_root(n - 1, m));
}

/**
 * _sqrt_recursion - finds natural square root
 * @n: int
 *
 * Return: actual square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (square_root(n / 2, n));
}

/**
 * is_prime_number - finds prime number
 * @n: integer
 *
 * Return:square root
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
