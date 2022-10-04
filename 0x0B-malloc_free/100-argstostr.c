#include "main.h"
#include <stdlib.h>

/**
* argstostr - funtion to concatenate all argument of the program to string
*
* @ac: Argument count
* @av: Argument vector
* Return: pointer to a new string
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int len = 0;
	int new = 0;

	(void)j;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[new] = av[i][j];
			new++;
		}
		str[new] = '\n';
		new++;
	}
	return (str);
	free(str);
}
