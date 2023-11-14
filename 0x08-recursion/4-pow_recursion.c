#include "main.h"

/**
 * _pow_recursion - function tht perfoms power
 * @x : number to bepowered
 * @y : number of times to power
 *
 * Return:power of value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
