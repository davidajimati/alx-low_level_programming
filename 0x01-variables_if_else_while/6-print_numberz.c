#include <stdio.h>

/**
 * main - Entry oint
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int code;
	int number;

	for (code = 0 ; code < 10 ; code++)
	{
		number = (code + '0');
		putchar(number);
		putchar('\n');
	}
	return (0);
}
