#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - funcrion that allocates memory unsing malloc
*
* @b: memory to be assigned
* Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	int *al;

	al = malloc(sizeof(b) + 1);

	if (al == NULL)
		return (98);
}
