#include "main.h"

/**
 * square_root - finds the square root of a value
 * @high: int
 * @low: int
 * @n: int
 *
 * Return: -1
 */

int square_root(int low, int high, int n)
{
	long mid;

	if (high >= low)
	{
		mid = (high + low) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
			return (square_root(mid + 1, high, n));
		if (mid * mid > n)
			return (square_root(low, mid - 1, n));
	}
	return (low);
}

/**
 * _sqrt_recursion - returns square root
 * @n: integer to be squared
 *
 * Return:squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root(2, n, n));
}
