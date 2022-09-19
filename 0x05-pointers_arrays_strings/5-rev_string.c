#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string variable
 * Return: ALways 0
 */
void rev_string(char *s)
{
	int leng;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (leng -= 1; leng >= 0; leng--)
	{
		_putchar(s[leng]);
	}
	_putchar('\n');
}
