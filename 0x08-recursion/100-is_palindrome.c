#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: pointer to char
*
* Return: int
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));


}


/**
 * _palindrome - if a string is palindrome
 * @s: pointer to char
 * @n: int, position of a char in a string
 * Return: int
*/

int _palindrome(char *s, int n)
{
	if (n < 1)
	{
		return (1);
	}
	else if (*s == *(s + n))
	{
		return (_palindrome(s + 1, n - 2));
	}
	return (0);
}

/**
 * is_palindrome - retuns 1 if the string is a palindrome
 * @s: pointer to char
 * Return: int
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_palindrome(s, len - 1));
}
