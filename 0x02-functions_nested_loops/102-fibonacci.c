#include <stdio.h>

/**
* main - Entry point
*
* Return: Always zero
*/
int main(void)
{
	long a = 1;
	long b = 2;
	int i;
	long c;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%ld", c);

		if (i < 50)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
