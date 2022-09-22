#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - changes all lowercase to uppercase
 *
 * @str: string data type
 * Return: char type
 */

char *string_toupper(char str[])
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; str[i] >= 'a' && str[i] <= 'z'; a++)
		{
			str[i] = (str[i] - 32);
		}
	}
	return (str);
}
