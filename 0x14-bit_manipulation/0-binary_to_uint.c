#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted number / NULL b is not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		u_int = u_int << 1;
		if (b[i] == '1')
			u_int += 1;
	}

	return (u_int);
}
