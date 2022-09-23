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

	j = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		while (c[i] != '\0' && real[j] != '\0')
			j++;
		if (c[i] == real[j])
			c[i] = alt[j];
	}
	return (c);
}
