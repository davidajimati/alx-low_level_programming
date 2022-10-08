#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory and intializes it to 0
*
* @nmemb: number of elements in array
* @size: bytes of each element
* Return: Void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);


	total = (size * nmemb) + 1;

	array = malloc((size * nmemb) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		array[i] = 0;
	}
	return (array);
	free(array);
}
