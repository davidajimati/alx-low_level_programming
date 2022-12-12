#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates string *src to *dest
 *
 * @dest: string 1
 * @src: string 2
 * Return: char type.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
