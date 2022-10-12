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
	unsigned int i;
	char *new;
	char *temp = ptr;

	if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
		{
			new[i] = temp[i];
		}
		free(ptr);
	}

	return (new);
}
