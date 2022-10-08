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
	int i, j;
	char *ptr;
	unsigned int str1;

	str1 = strlen(s1);

	if (s1 == NULL)
		return (NULL);

	if (n == sizeof(s2) || n > sizeof(s2))
	{
		ptr = malloc(strlen(s1) + sizeof(s2));
	}
	else
		ptr = malloc(strlen(s1) + n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; str1 < strlen(ptr); j++)
	{
		ptr[str1] = s2[j];
		str1++;
	}
	return (ptr);
}
