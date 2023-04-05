#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - helper function for is_palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (*(s + start) != *(s + end))
	return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - computes the length of a string recursively
 * @s: the string to compute the length of
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
