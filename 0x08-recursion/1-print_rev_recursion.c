#include "main.h"
int counter(char *s, int j);

/**
* _print_rev_recursion - prints a string in reverse
*
* @s: string
* Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	int j;

	if (j == -1)
		return;

	j = counter(s, j);
	_putchar(*(s + (j - 1)));
	_print_rev_recursion(s);
}

/**
* counter - counts the number of characters in  a string
*
* @string: string to be counted
* @j: integer to be returned
* Return: int j
*/

int counter(char *s, int j)
{
	int i = 0;

	j = 0;
	if (*(s +  i) != '\0')
	{
		i++;
	}
	j = i;
	return (j);
}
