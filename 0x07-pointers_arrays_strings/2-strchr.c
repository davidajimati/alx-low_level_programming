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
	int i;
	char *point;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		point = &(s[i]);
		return (point);
		}
		if (c == '\0')
		return (s);
	}
	return ('\0');
}
