#include <stdio.h>
#include <stdlib.h>

/**
* main - Funtion that multiplies 2 numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
