#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;

	if (*s == '\0')
	return (1);

	while (*(s + length))
	length++;

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - helper function for is_palindrome
 * @s: pointer to the string to check
 * @start: starting index to check
 * @end: ending index to check
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
