#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a character by replacing it with the other 13 letter
 *
 * @c: character variable to be encoded
 * Return: c
 */

char *rot13(char *c)
{
	int i, j;
	int real[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	int alt[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k','l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	i = 0;

	for (j = 0; c[j] != '\0'; j++)
	{
		while (real[i] != '\0')
			i++;

		if (c[j] == real[i])
			c[j] = alt[i];
	}
	return (c);
}
