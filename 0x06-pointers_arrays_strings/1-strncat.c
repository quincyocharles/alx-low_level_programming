#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: A pointer to the string to concatenate the src string
 * @src: The string to concatenate to 'dest'
 * @n: The maximum number of bytes from 'src' to use
 * Return: pointer to the resulting string 'dest'
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
