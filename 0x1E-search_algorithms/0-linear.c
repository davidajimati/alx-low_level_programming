#include "search_algos.h"

/**
 * linear_search - searches for value in array using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if array is NULL or value is absent or INDEX of value in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	return (-1);
}
