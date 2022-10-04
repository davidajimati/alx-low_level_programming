#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* strtow - splits strings into words
*
* @str: string pointer variable
* Return: returns pointer to an array of strings
*/

char **strtow(char *str)
{
	int i, length, next = 0;
	char **p;
	char *not = "";

	if (str == NULL || str == not)
		return (NULL);

	length = strlen(str) + 1;

	p = malloc(sizeof(char) * length);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			if (str[i + 1] == '\t' || str[i + 1] == ' ')
			{
				*p[next] = ' ';
				next++;
			}
			else
				continue;
		}
		else
		{
			*p[next] = str[i];
		}
	}
	return (p);
}
