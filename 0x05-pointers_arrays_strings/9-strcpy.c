#include "main.h"
#include <stdio.h>

/**
* _strcpy - Copies the string from one pointer to the other
* @dest: string one
* @src: string two
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	char *dest1 = dest;
	char *src1 = src;

	while (*src1 != '\0')
	{
		*dest1 = *src1;
		src1++;
		dest1++;
	}

	*dest1 = *src1;

	return (dest);
}
