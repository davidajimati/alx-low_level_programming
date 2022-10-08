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
	long unsigned int i = 0, count;

	char *ptr;

	count = sizeof(s1);

	ptr = malloc(sizeof(s1) + n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (count = sizeof(s1); count != sizeof(ptr); count++)
	{
		ptr[count] = s2[i];
		count++;
		i++;
	}
	return (ptr);
}
