#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates 2 strings
*
* @s1: string 1
* @s2: string 2
* Return: Pointer to the new memory location containing the concatenation
*/

char *str_concat(char *s1, char *s2)
{
	int i, length, l1;
	int j = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (!s1 || !s2)
	{
		return (NULL);
	}

	length = strlen(s1) + strlen(s2) + 1;
	l1 = strlen(s1);
	p = malloc(sizeof(char) * length);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	while (l1 < length && s2[j] != '\0')
	{
		p[l1] = s2[j];
		l1++;
		j++;
	}
	return (p);
	free(p);
}
