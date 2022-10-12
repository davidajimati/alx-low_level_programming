#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: string to be printed
 * @f: funtion pointer
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
