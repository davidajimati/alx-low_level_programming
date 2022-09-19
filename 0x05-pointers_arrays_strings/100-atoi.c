#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to integer
* @s: String
*
* Return: the integer
*/

int _atoi(char *s)
{
	int sing = 1;
	unsigned int total = 0;
	char tac = 0;

	while (*s)
	{
		if (*s == '-')
			sing *= -1;
		if (*s >= '0' && *s <= '9')
		{
			tac = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (tac)
				break;
		}
		s++;
	}
	if (sing < 0)
		total = (-(total));
	return (total);
}
