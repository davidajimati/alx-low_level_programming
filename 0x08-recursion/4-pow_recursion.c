#include "main.h"

/**
* _pow_recursion - returns the value of x raised to y
*
* @x: integer 1
* @y: integer 2
* Return: power of x to y
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, (y - 1)));
	}
	else
		return (-1);
}
