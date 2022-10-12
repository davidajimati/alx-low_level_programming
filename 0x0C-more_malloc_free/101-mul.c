#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_error - Print errors and exit
 *
 * Return: void
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
		print_error();

	else if (is_digit(argv[1]) && is_digit(argv[2]))
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		print_error();

	return (0);
}
