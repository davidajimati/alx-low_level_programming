#include <stdio.h>

/**
* main - prints the number of command line arguments
* @argc: argument count
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
