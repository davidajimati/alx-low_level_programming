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
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
