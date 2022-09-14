#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function to perform the action
 *
 * @i: main integer
 * Return: returns the last number of i
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	printf("%d", last);
	fflush(stdout);
	return (('\r')last);
}
