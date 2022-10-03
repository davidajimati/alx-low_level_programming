#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup -  returns pointer to the newly allocated space in memory
*
* @str: string to be copied
* Return: returns a char pointer
*/

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	if (!str)
		return (NULL);

	p = malloc(strlen(str) + 1);

	if (!p)
		return (NULL);

	if (p == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
	free(p);
}
