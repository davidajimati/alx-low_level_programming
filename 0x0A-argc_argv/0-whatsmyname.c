#include <stdio.h>

/**
* main - funtion to print out the name of the file
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *(argv + 0));
	return (0);
}
