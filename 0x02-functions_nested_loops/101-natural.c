#include <stdio.h>

/**
* main - Entry point
*
* Return: Always zero
*/
int main(void)
{
	int i;
	int check_3;
	int check_5;
	int total = 0;

	for (i = 0; i <= 1024; i++)
	{
		check_3 = (i % 3);
		check_5 = (i % 5);

		if (check_3 == 0 || check_5 == 0)
			total += i;
	}

	printf("%d\n", total);

	return (0);
}
