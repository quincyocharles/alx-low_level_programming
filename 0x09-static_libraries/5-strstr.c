#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *q = haystack;
	char *t = needle;

	while (*q == *t && *t != '\0')
	{
	q++;
	t++;
	}

	if (*t == '\0')
	return (haystack);
	}
	return (0);
}
