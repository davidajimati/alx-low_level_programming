#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void decider(int argc, char *argv[]);
/**
* main -  prints minimum number of coins to make change
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		decider(argc, argv);
	}
	return (0);
}

/**
* decider - decides the number of coins to give as change
* @argv: argument vector to be considered
* Return: Count
*/

void decider(int argc, char *argv[])
{
	int count, rem, rrem, rrrem, rrrrem;

	count = 0;

	(void)argc;

	if (atoi(argv[1]) >= 25)
	{
		count = atoi(argv[1]) / 25;
		rem = atoi(argv[1]) % 25;
	}

	if (rem >= 10)
	{
	count += rem / 10;
	rrem = rem % 10;
	}

	if (rrem >= 5)
	{
	count += rrem / 5;
	rrrem = rrem % 5;
	}

	if (rrrem >= 2)
	{
	count += rrrem / 2;
	rrrrem = rrrem % 2;
	}

	if (rrrrem >= 1)
	{
		count += rrrrem / 1;
	}
	printf("%d\n", count);
}
