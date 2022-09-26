#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s: String
* @c: Character
*
* Return: a pointer to the first occurance of the character
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
