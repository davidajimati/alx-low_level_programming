#include "main.h"
#include <stdlib.h>

/**
* alloc_grid -  returns pointer ti a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int) * (width + height));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
		return (arr);
	}
	return (arr);
}
