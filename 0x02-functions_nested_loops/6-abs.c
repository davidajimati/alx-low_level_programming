#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - evaluates the absolute value of an integer
 *
 * @x: integer
 * Return: returns the integer type of x when successful
 */
int _abs(int n)
{
	if (n <= 0)
		return (-n);
	else
		return (n);
}
