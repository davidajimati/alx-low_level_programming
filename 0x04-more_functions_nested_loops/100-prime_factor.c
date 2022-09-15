#include <stdio.h>

/**
* main - Entry Point
*
* Return: zero
*/

int main(void)
{
	long n = 612852475143;
	int i = 2, largest = 2;

	while (n != 1)
	{
		while ((n % i) == 0)
		{
			n = n / i;
			largest = i;
		}

		i++;
	}

	printf("%d\n", largest);

	return (0);
}
