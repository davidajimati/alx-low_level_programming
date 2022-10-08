#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory and intializes it to 0
*
* @nmemb: number of elements in array
* @size: bytes of each element
* Return: Returns pointer to allocated memory or NULL if fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);


	total = size * nmemb;

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		array[i] = 0;
	}
	return (array);
	free(array);
}
