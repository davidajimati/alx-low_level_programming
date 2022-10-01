#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int check(char *s);

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, j, detect = 0, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 0; i < argc; i++)
	{
		detect = check(argv[i]);

		if (detect == 1)
			break;
	}

	if (detect == 1)
	{
		printf("Error\n");
		return(1);
	}
	
	else
	{
		for (j = 1; j < argc; j++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
* check - checks if a variable a digit
* @num: variable
* Return: 0 when succesful, 1 when false
*/

int check(char *s)
{
	int a;
	int check = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (!isdigit(s[a]))
		{
			check = 1;
			break;
		}
		else
			check = 0;
	}
	return (check);
}
