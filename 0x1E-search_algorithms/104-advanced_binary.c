#include "search_algos.h"
int search_engine(int *array, size_t size, int value, size_t left,
				  size_t right);

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to first element in array
 * @value: values to search for
 * @size: size of array
 * Return: index of value or -1 if array is NULL or value is absent
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array || size == 0 || !value)
	{
		return (-1);
	}

	return (search_engine(array, size, value, left, right));
}

int search_engine(int *array, size_t size, int value, size_t left,
				  size_t right)
{
	size_t middle, i = left;

	if (left > right)
		return (-1);

	middle = left + (right - left) / 2;
	printf("Searching in array: ");
	for (; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (array[middle] == value && array[middle + i] != value)
		return (middle);

	if (array[middle] < value)
		return (search_engine(array, size, value, middle + 1, right));
	else
		return (search_engine(array, size, value, left, middle - 1));
}
