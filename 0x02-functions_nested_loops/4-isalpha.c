#include "main.h"

/**
 * _isalpha - funtion that does the check
 *
 * @c: letter to be checked for
 * Return: returns the result of the function
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
