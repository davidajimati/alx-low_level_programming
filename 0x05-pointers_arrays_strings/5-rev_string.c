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
	char rev = s[0];
	int cot = 0;
	int x;

	while (s[cot] != '\0')
		cot++;

	for (x = 0; x < cot; x++)
	{
		cot--;
		rev = s[x];
		s[x] = s[cot];
		s[cot] = rev;
	}
}
