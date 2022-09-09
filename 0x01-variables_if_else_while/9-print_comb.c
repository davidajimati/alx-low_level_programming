#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char out;

	for (num = 0 ; num <= 9 ; num++)
	{
		out = num + '0';
		putchar(out);

		if (out != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
