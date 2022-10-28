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

unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
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
	unsigned int decimal, i, rem, value;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			continue;
		}
		else
			return (0);
	}

	value  = atoi(b);

	while (value != 0)
	{
		rem = value % 10;
		value = value / 10;
		decimal += rem * power(2, i);
		i++;
	}
	return (decimal);

