#include "main.h"

/**
 * _strchr - this locates a character in a string
 * @s: the pointer to string
 * @c: the character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0'; r++)
	{
	if (s[r] == c)
	return (&s[r]);
	}
	return (0);
}
