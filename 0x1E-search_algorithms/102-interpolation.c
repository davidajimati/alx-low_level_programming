#include "search_algos.h"

/**
 * interpolation_search - searches a values using interpolation algo.
 * @array: pointer to first element in array
 * @size: of array
 * @value: to search for
 * Return: index of value in array || -1 if not found 'or' NULL array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t probe;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		probe = low + (((double)(high - low) /
						(array[high] - array[low])) *
					   (value - array[low]));
		if (probe > size)
			printf("Value checked array[%ld] is out of range", probe);
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return ((int)probe);
		else if (array[probe] < value)
			low = probe + 1;
		else
			high = probe - 1;
	}

	return (-1);
}
