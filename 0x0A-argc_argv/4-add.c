#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
