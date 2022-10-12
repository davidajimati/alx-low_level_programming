#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds a, b
 *
 * @a: first integer
 * @b: second integer
 * Return: result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - adds a, b
 *
 * @a: first integer
 * @b: second integer
 * Return: result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - adds a, b
 *
 * @a: first integer
 * @b: second integer
 * Return: result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - adds a, b
 *
 * @a: first integer
 * @b: second integer
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - adds a, b
 *
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of a, b division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
