#include "main.h"

/**
* factorial - returns the factorial of a given number
*
* @n: subject variable
* Return: Factorial of n
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		if (n == 1)
			return (1);
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
