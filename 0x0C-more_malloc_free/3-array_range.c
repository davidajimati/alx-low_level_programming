#include "main.h"
#include <stdlib.h>

/**
* array_range - funtion to create an array of integers
*
* @min: minumum value
* @max: maximum value
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	len = (max - min) + 1;
	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++)
	{
		array[i] = min;
		i++;
	}
	return (array);
	free(array);
}
