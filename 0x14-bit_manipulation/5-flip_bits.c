#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get another number
 *
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_no;

	for (bits_no = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_no++;
	}
	return (bits_no);
}
