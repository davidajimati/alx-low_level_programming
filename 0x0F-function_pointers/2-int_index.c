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
	int i;
	int confam;
	int same = -1;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (same);

	for (i = 0; i < size; i++)
	{
		confam = cmp(array[i]);
		if (confam != 0)
		{
			same = i;
			return (same);
		}
	}
	return (same);
}
