#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if int c is a digit
 *
 * @c: integer to be checked
 * Return: returns either 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}

