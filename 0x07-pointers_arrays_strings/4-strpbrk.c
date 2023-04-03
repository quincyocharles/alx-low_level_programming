#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int k, m;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (m = 0; accept[m] != '\0'; m++)
	{
	if (s[k] == accept[m])
	{
	return (s + k);
	}
	}
	}

	return (NULL);
}
