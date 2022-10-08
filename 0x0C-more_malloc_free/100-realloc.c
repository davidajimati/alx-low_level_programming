#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to previous memory allocated with malloc: malloc(old_size)
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: returns pointer to newly allocated address
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i;
	char *temp = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	point = (char *)malloc(new_size);

	if (point == NULL)
		return (NULL);
	free(ptr);

	for (i = 0; i < old_size; i++)
	{
		point[i] = temp[i];
	}
	return (point);
	free(point);
}
