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
	int c;
	int c1;

	for (a = 0; a < 10; a++)
	{
		a1 = ((a % 10) + '0');

		for (b = 0; b < 10; b++)
		{
			b1 = ((b % 10) + '0');

			for (c = 0; c < 10; c++)
			{
				c1 = ((c % 10) + '0');

				if (a != b && a != c && b != c && a < b && b < c)
				{
					putchar(a1);
					putchar(b1);
					putchar(c1);

					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
