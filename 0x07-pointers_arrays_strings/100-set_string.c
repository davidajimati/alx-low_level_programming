#include "main.h"

/**
* set_string - sets the value of a pointer to a char
*
* @s: double pointer to be changed
* @to: The value to change the pointer to
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
