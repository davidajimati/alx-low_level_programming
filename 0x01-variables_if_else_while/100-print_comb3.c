#include <stdio.h>



/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
	int a;
	int a1;
	int b;
	int b1;

	for (a = 0; a < 10; a++)
	{
		a1 = ((a % 10) + '0');

		for (b = 0; b < 10; b++)
		{
			b1 = ((b % 10) + '0');

			if (a != b && a < b)
			{
				putchar(a1);
				putchar(b1);

				if (a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

