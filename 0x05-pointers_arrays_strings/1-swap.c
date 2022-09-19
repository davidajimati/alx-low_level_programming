#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 *
 * @b: the subject variable
 * @a: Variable 2
 * Return: void function, declared in main function
 */

void swap_int(int *a, int *b)
{
	int x = 1;
	int y = 2;

	a = &x;
	b = &y;
	*a = y;
	*b = x;
}
