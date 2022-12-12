#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - function that copies a string
 *
 * @dest: string 1
 * @src: string 2
 * @n: space deciding integer
 * Return: char type (dest in this case)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
		return (dest);
}
