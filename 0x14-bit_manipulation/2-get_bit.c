#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: decimal number variable
 * @index: index starting from 0
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}
