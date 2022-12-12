#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates 2 strings
 *
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: char type
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
