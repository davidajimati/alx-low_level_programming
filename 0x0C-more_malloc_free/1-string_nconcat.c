#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - funtion to concatenate 2 strings
*
* @s1: String 1
* @s2: string 2
* @n: bytes of string 2 to concatenate with s1
* Return: char pointer to the new memory location
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		return (NULL);

	if (n == strlen(s2) || n > strlen(s2))
	{
		ptr = malloc(sizeof(s1) + strlen(s2));
	}
	else
		ptr = malloc(sizeof(s1) + n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
