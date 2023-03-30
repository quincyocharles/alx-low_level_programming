#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer resulting to string dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
