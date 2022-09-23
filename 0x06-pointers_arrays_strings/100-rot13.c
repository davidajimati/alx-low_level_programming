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
	char real[] = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
