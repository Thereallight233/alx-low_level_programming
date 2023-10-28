#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: string
* Return: the length of a string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1));
}

/**
* check_palindrome - compares each character of the string.
* @s: string
* @start: smallest iterator.
* @end: biggest iterator.
* Return: .
*/
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1));
}

/**
* is_palindrome - detects if a string is a palindrome.
* @s: string.
* Return: 1 if s is a palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
