#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * power - finds the exponent of the base (raise to power)
 *
 * @base: base number
 * @exponent: exponent number
 * Return: the exponent of the base
 */

unsigned int power(base, exponent)
{
	unsigned int result = 1;

	for (exponent; exponent > 0; exponent--)
	{
		result *= base;
	}
	return (result);
}
