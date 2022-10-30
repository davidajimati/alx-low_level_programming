#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to string of digits
 * @index: target
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	p = ~(1 << index);
	*n = *n & p;

	return (1);
}
