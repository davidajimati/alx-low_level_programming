#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted number / NULL b is not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, i, rem;
	char bn;

	bn = (*b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		else
			continue;
	}

	bn = atoi(b);

	while (bn != 0)
	{
		rem = bn % 10;
		bn = bn / 10;
		decimal += rem * power(2, i);
		i++;
	}
	return (decimal);
}
