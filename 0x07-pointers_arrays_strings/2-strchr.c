#include "main.h"

/**
 * *_strchr - Locates a character in a string and allocates a pointer
 *
 * @s: string to be examined
 * @c: character to be searched for
 * Return: Pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	if (*s != c)
	{
		s++;
	}
	else
		return (s);

	if (c == '\0')
		return (s);

	return ('\0');
}
