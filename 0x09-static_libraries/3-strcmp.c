#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: -ve is s1 is less than s2 and +ve if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}
	return (s1[k] - s2[k]);
}
