#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory unsing malloc
*
* @b: memory to be assigned
* Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);

	if (al == NULL)
		return (NULL);
	else
		return (al);
}
