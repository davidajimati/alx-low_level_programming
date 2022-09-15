#include "main.h"
#include <ctype.h>

/**
 * _isupper - main function checks if integer is upper case
 *
 * @c: integer to be analysed
 * Return: Return 0 or 1
 */
int _isupper(int c)
{
	
	if (isupper(c) == 0)
	{
		return (0);
	}
	else if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0)
	}
}
