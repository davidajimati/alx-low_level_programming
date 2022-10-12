#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function as a parameter on element of  array
 *
 * @array: subject array
 * @size: size of array
 * @action: funtion pointer
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
