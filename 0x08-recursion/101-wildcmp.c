#include "main.h"

/**
* wildcmp -  compares two strings and returns 1 if identical or 0 if not
*
* @s1: main string
* @s2: wildcmp string
* Return: 1 if succesful Or 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	if ((*s1 != *s2) && (*s2 != '*'))
		return (0);

	if (*s1 == *s2)
		return (1);

	return (wildcmp(s1, (s2 + 1)));
}
