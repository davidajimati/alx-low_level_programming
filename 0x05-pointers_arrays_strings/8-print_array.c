#include "main.h"
#include <stdio.h>

/**
* print_array - Prints nth number of an array
* @a: array
* @n: number of elements to print
*
* Return: void
*/

void print_array(int *a, int n)
{
	int x;
	int count;

	count = n - 1;

	for (x = 0; x <= count; x++)
	{
		printf("%d", a[x]);

		if (x < count)
			printf(", ");
	}

	printf("\n");
}
