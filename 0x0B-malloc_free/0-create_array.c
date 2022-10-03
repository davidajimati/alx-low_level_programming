#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - Creates array of chars
*
* @size: size of array
* @c: array to be created
* Return: Char type  or NULL if error
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(c));

	if (p != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	else
		return (NULL);
}
