#include <ctype.h>
#include "main.h"

/**
 * _islower - detects if a letter is lower case
 *
 * @c: letter to be checked for lowercase
 * Return: exempted here, will be used in the main.c file
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
