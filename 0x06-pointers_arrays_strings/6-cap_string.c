#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string to be capitalized
 * Return: char type
 */

char *cap_string(char str[])
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
