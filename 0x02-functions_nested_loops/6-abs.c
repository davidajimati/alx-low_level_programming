#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - evaluates the absolute value of an integer
 *
 * @x: integer
 * Return: returns 0 when successful
 */
int _abs(int x)
{
	int result;

	result = abs(x);
	printf("%d\n", result);
	return (0);
}
