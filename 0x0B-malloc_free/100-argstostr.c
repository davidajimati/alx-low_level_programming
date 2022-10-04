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

	(void)j;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(**av) * ac);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/* for (j = 0; *av[j] != '\0'; j++) */
		{
			str[i] = *av[i];
		}
	}
	return (str);
	free(str);
}
