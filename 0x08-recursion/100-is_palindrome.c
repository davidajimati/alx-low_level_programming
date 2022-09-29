#include "main.h"

/**
* _strlen_recursion - Recursively gets the length of string
* @s: String
*
* Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}

/**
* check_palindrome - Recursively checks if the string is palindrome
* @a: counter 1
* @b: Total counter
* @s: String
*
* Return: 1 if palindrome, 0 otherwise
*/

int check_palindrome(int a, int b, char *s)
{
	if (a >= b)
		return (1);
	if (s[a] != s[b])
		return (0);
	else
		return (check_palindrome(a + 1, b - 1, s));
}

/**
* is_palindrome - Recursively checks if the string is palindrome
* @s: String
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (*s != '\0')
		return (check_palindrome(0, i, s));

	return (0);
}
