#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz function
 *
 * @i: determinant variable
 * Return: Always 0
 */

int main(int i)
{
	int i, a;

	for (i = 1; i < 100; 1++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		for (a = 0; a < 99; a++)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
