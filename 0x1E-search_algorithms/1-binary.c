#include "search_algos.h"
int search_engine(int *array, size_t size, int value, size_t left, size_t right);
/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to first element in array
 * @value: values to search for
 * @size: size of array
 * Return: index of value or -1 if array is NULL or value is absent
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array || size == 0 || !value)
	{
		return (-1);
	}

	return (search_engine(array, size, value, left, right));
}

int search_engine(int *array, size_t size, int value, size_t left, size_t right)
{
	size_t lnr =  left + right, middle;

	if ( left > right)
		return (-1);

	if (lnr % 2 == 0)
		middle = lnr / 2;
	else
		middle = (lnr - 1) / 2;

	if (array[middle] ==  value)
		return (middle);

	else if (array[middle] < value)
		return (search_engine(array, size, value, middle + 1, right));
	else
		return (search_engine(array, size, value, left, middle - 1));
}
