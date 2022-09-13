#include "main.h"

/**
 * print_alphabet_x10 - Prints a letter 10 times
 *
 * Return: Letf out into the main function
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char start;

	while (i < 11)
	{
		for (start = 'a' ; start <= 'z'; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
		i++;
	}
}
