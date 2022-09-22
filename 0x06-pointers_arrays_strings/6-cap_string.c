#include "main.h"
#include <string.h>

/**
 * *cap_string - Chages lowercase to uppercase
 *
 * @s: string variable
 * Return: variable c
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i] == 44 || s[i] == 59 || s[i] == 46 || s[i] == 33)
			{
				s[i + 1] -= 32;
			}
		}
		else if (s[i] == 63 || s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			s[i + 1] -= 32;
		}
	}
	return (s);
}
