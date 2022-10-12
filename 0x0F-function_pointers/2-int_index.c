#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - funtion that searches for an integer
 *
 * @array: variable array
 * @size: size of variable array
 * @cmp: function pointer to be used
 * Return:index of the first elemnt, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int j;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (0);

	for (i = 0; array[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] == (*cmp))
				return (i);
		}
	}
	return (-1);
}
