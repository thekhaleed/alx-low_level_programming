#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two values
 * @a: int
 * @b: int
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts values
 * @a:int
 * @b: int
 *
 * Return:subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two values
 * @a: int
 * @b: int
 *
 * Return: multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two values
 * @a: int
 * @b: int
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder
 * @a: int
 * @b: int
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
